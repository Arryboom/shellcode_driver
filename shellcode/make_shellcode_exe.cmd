cl.exe /O1 /Os /Oy /FD /MT /GS- /J /GR- /FAcs /W4 /Zl /c /TP /D "_WIN32_WINNT=0x0601" shellcode.cpp
ml64 entry.asm /Fe shellcode.exe /link /NODEFAULTLIB /RELEASE /MACHINE:X64 /SUBSYSTEM:CONSOLE /entry:my_hook shellcode.obj
del *.obj
del *.cod
del *.lnk
del *.idb



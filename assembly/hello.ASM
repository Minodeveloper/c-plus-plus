format PE CONSOLE

entry start

include '%include%\win32a.inc'

section '.data' data readable writeable
        message db 'Hello world',0
        msgformat db '%s',0

section '.idata' import data readable writable
        library kernel32, 'kernel32.dll',msvcrt, 'msvcrt.dll'
        import  kernel32, ExitProcess, 'ExitProcess'
        import  msvcrt, printf, 'printf'

section '.code' code readable executable
        start:
                push message
                push msgformat
                call [printf]
                push 0
                call [ExitProcess]



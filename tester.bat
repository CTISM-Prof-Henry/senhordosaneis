@echo off 
REM impede que imprima na tela os comandos sendo executados

gcc test.c -o test.o
call test.o > test.output

set "file_path=test.output"
set "expected_string=ola mundo!"

for /f "usebackq delims=" %%A in ("%file_path%") do (
    if "%%A"=="%expected_string%" (
        echo Correto!
    ) else (
        echo Errado!
    )
    goto :end
)

:end
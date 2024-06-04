@echo off
@REM Onde escrever o binário do programa
set SOURCE=src\test.c
set BINARY=src\test.exe
set OUTPUT=src\test.output
set EXPECTED_OUTPUT_FILE=gabaritos\test.output

@REM Compila o programa
gcc %SOURCE% -o %BINARY%

@REM Escreve a saída no arquivo de saída
%BINARY% > %OUTPUT%

@REM Verifica se o arquivo com a saída esperada existe
if not exist "%EXPECTED_OUTPUT_FILE%" (
    echo Erro: O arquivo com a saída de texto não foi encontrado!
    exit /b 1
)

@REM Lê a saída esperada de um arquivo
set /p EXPECTED_OUTPUT=<"%EXPECTED_OUTPUT_FILE%"

@REM Roda o programa e captura a saída
set ACTUAL_OUTPUT=
for /f "delims=" %%i in ('%BINARY%') do set "ACTUAL_OUTPUT=%%i"

@REM Compara a saída com o esperado
if "%ACTUAL_OUTPUT%"=="%EXPECTED_OUTPUT%" (
    echo Certo!
) else (
    echo Errado!
)

@REM imprime tudo na tela igual
echo Esperava: %EXPECTED_OUTPUT%
echo Recebeu: %ACTUAL_OUTPUT%
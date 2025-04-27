@echo off
setlocal enabledelayedexpansion

:: Solicita o nome da pasta onde os arquivos serão criados
set /p nome_pasta=Digite o nome da pasta a ser criada: 

:: Cria a pasta
mkdir "%nome_pasta%"

:: Solicita a quantidade de arquivos a serem criados
set /p quantidade=Digite o número de arquivos a serem criados: 

:: Solicita o nome base dos arquivos
set /p nome_base=Digite o nome base dos arquivos (ex: exercicio): 

:: Loop para criar os arquivos dentro da pasta
for /l %%i in (1,1,%quantidade%) do (
    type nul > "%nome_pasta%\%nome_base%%%i.c"
    echo Arquivo %%i criado com sucesso.
)

:: Mensagem final
echo.
echo Todos os arquivos foram criados com sucesso na pasta "%nome_pasta%"!
pause
@echo off
setlocal enabledelayedexpansion

:: Solicita a quantidade de arquivos a serem criados
set /p quantidade=Digite o número de arquivos a serem criados: 

:: Solicita o nome base dos arquivos
set /p nome_base=Digite o nome base dos arquivos (ex: exercicio): 

:: Loop para criar os arquivos
for /l %%i in (1,1,%quantidade%) do (
    type nul > "%nome_base%%%i.c"
    echo Arquivo %%i criado com sucesso.
)

:: Mensagem final
echo.
echo Todos os arquivos foram criados com sucesso!
pause

# Configurando ambiente para programação C/C++

### 1. Instalar o MinGW (Minimal GNU for Windows) - Usuários Windows

1. Baixar a instalar [MinGW](https://sourceforge.net/projects/mingw/)
2. Na instalação, certifique-se de marcar os pacotes:
    a. mingw32-base
    b. mingw-32-gcc-g++
    c. msys-base
3. No menu "Installation", aplique as mudanças. 
4. Coloque o diretório de instalação do MinGW no PATH
    a. Se o diretório de instalação foi o padrão, ex: "C:\MinGW\" coloque "C:\MinGW\bin" no PATH.
    b. Tecla Windows > Pesquisar por: Variáveis de ambiente:
    c. Na janela "Propreidades do Sistema", na aba Avançado, clique em "Variáveis de Ambiente..."
    d. Selecione PATH e clique em editar. 
    f. NA janela "Editar variável de ambiente",clique em novo e cole o caminho **C:\MinGW\bin**, se esse foi o de instalação.

## Recomendações de IDE

### 1. Instalar o VSCode

1. Baixar e instalar o [VSCode](https://code.visualstudio.com/)
2. Instalar as extensões: 
    a. C/C++ (Microsoft)
    b. C/C++ Compile
    c. Code Runner

### 2. Instalar o Geany

[Download aqui](https://www.geany.org)

### 3. Instalar o Codeblocks

[Download aqui](https://www.geany.org)
instalar o seguinte pacote: **codeblocks-20.03mingw-setup.exe**

## Testar

Termianl > New Terminal

Tente o seguin comando

```
gcc hello.c -o hello
./hello
```



# Executando Código C no Google Colab

Este tutorial orienta sobre como rodar um código em C no Google Colab utilizando o compilador `gcc`.

## Passo a Passo

### 1. Instalar o compilador `gcc`
Antes de rodar qualquer código C, é necessário instalar o compilador `gcc` no ambiente do Google Colab. Execute o seguinte comando em uma célula:

```
!apt-get install gcc
```

### 2. Escreva o arquivo
Agora execute essa linha de código e ponha o nome do programa.c que você deseja:
```
%%writefile program.c
```

### 3. Compilar arquivo
Para compilar o arquivo, faça: 
```
!gcc program.c -o program
```

### 4. Execução final
Para executar o código, digite: 
```
!./program
```

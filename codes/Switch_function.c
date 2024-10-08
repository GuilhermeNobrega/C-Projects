#include <stdio.h>
//falta retirar o null
const char* minhaFuncao() {
    char frase[] = "Rodou!!";
    return frase;
}

int main() {
    printf("1 - Main\n");
    int valor = 2;

    switch (valor) {
        case 1:
            printf("Caso 1\n");
            break;
        case 2:
            printf("Resultado da funcao: %s\n", minhaFuncao());
            break;
        case 3:
            printf("Caso 3\n");
            break;
        default:
            printf("Caso padrão\n");
    }

    return 0;
}

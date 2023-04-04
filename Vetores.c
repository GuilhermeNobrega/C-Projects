#include <stdio.h>

int main() {
    int a;
    int vetor[4];
    for(a=0;a<4;a++){
        printf("Digite uma nota para salvar no vetor:\n");
        scanf("%d",&vetor[a]);
    }
    printf("-----------------\nNOTAS SALVAS SAO\n-----------------\n");
    for(a=0;a<4;a++){
        printf("*\tNotas %d = %d\n",a+1,vetor[a]);
    }
    printf("Quantidade de notas = %d",a-1);
}
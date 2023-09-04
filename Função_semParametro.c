
#include <stdio.h>
#include <string.h>
int tamanho(){
    char changes[20];
    printf("Digite a frase para ver quntas letras tem:");
    scanf("%s",&changes);
    int frase = strlen(changes);
    printf("Tamanho da frase solicitada eh %d", frase);
    }
int main()
{   int sla;
    printf("Vamos tentar executar essa funcao..\n");
    sla = tamanho();
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int aleatorio(){
    int valor;
    printf("Vamos gerar valores aleatorios...\n");
    srand (time(NULL)); // reiniciar o tempo do rand;
    valor = rand()%20+1;
    printf("Nosso valor aleatorio foi: %d",valor);
}

int main(){
    char resposta;
    printf("Desejas ver o random em C?\n");
    scanf("%c",&resposta);
    if(resposta=='s'|| resposta=='S'){
        aleatorio();
    }
    else{
        printf("Encerrado!\n");
    }
}

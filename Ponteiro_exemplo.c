#include <stdio.h>

int main(){

    int x=10;
    int *ponteiro;
    ponteiro = &x;
    printf("******************************\n");

    printf("Endereco de memoria de x = %d\n",&x); //pode ser ponteiro tbm. Agora se botarmos *ponteiro, ele imprime o resultado//

    int y =20;
    *ponteiro = y; //ponteiro recebendo valor de y//
    printf("******************************\n");
    printf("Valor de x: %d\nValor de y: %d\n",x,y);
    printf("******************************");



}

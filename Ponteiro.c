#include <stdio.h>
// insirir o & no print significa que desejo ver o endereço de memoria que esta guardando a  variavel//
int main(){
    int x =10;
    int *ponteiro;
    ponteiro = &x; //sem o & imprime o valor da variavel, com indica o endereço que será salvo
    printf("X = %d\n",x);
    printf("ENDERECO NA MEMORIA = %d\n",&x);
    printf("Valor ponteiro = %d",*ponteiro); //sem asterisco, imprime o endereço de memoria. Asterisco indica valor do endereço de memoria//



}

#include <stdio.h>
// insirir o & no print significa que desejo ver o endere�o de memoria que esta guardando a  variavel//
int main(){
    int x =10;
    int *ponteiro;
    ponteiro = &x; //sem o & imprime o valor da variavel, com indica o endere�o que ser� salvo
    printf("X = %d\n",x);
    printf("ENDERECO NA MEMORIA = %d\n",&x);
    printf("Valor ponteiro = %d",*ponteiro); //sem asterisco, imprime o endere�o de memoria. Asterisco indica valor do endere�o de memoria//



}

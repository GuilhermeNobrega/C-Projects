#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int valor;
    int valor_usuario;
    int tentativas=0;
    int ditos=3;
    printf("Faremos o uso do rand! O usuario ira digitar um valor e o pc vai escolher um valor aleatorio:\n");
    srand(time(NULL)); //Isso indica que a cada rodada do código, ele irá mudar o valor escolhido pelo sistema
    valor = rand() % 10+1; // Gera valores aleatórios entre 1 e 10.
    for(tentativas;tentativas<3;tentativas++){
    printf("Digite seu valor:");
    scanf("%d",&valor_usuario);
    if(valor_usuario==valor){
        printf("Parabens, vc acertou o valor que o SISTEMA escolheu: %d\n",valor);
        break;
    }
    else
    if(valor_usuario!=valor){
        ditos = ditos-1;
        printf("Valor n e igual ao valor que o SISTEMA escolheu.Tente novamente\n");
        printf("Voce ainda tem %d chances\n",ditos);
    }
    }
    printf("Valor que o SISTEMA escolheu era: %d",valor);

}


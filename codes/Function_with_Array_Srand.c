#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int aleatorio(){
    int valor;
    printf("Vamos gerar valores aleatorios...\n");
    srand (time(NULL));
    for(int a=0;a<7;a++){
     // reiniciar o tempo do rand;
    valor = rand()%20+1;
    printf("Nosso valor aleatorio foi: %d\n",valor);
}
}


int main(){
    int c =0;
    int salvar = 0;
    int notas;
    int vetordoido[7];
    int oi = aleatorio(vetordoido);
    for(c;c<7;c++){
        printf("Valor do vetor na posicao [%d] eh: %d\n",c,vetordoido[c]);
        salvar = salvar+vetordoido[c];
    }
    printf("Soma dos valores dentro do vetor: = %d",salvar);
}


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int aleatorio(){
    int valor;
    printf("Vamos gerar valores aleatorios...\n");
    //srand (time(NULL));
    valor = rand()%20+1;
    return valor;
}


int main(){
    int c =0;
    int salvar = 0;
    int notas;
    int vetordoido[7];
    for(c;c<7;c++){
        vetordoido[c] = aleatorio();
        printf("Valor do vetor na posicao [%d] eh: %d\n",c,vetordoido[c]);
        salvar = salvar+vetordoido[c];
    }
    printf("Soma dos valores dentro do vetor: = %d",salvar);
    return 1;
}

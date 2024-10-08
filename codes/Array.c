#include <stdio.h>
#include <stdlib.h>
int main(){
    int salvar = 0;
    int notas;
    int vetordoido[7];
    for(int c=0;c<7;c++){
    printf("Digite a nota do aluno:\n");
    scanf("%d",&vetordoido[c]);
    //printf("Valor do vetor na posicao [%d] eh: %d\n",c,vetordoido[c]);
    salvar = salvar+vetordoido[c];
}
    for(int d =0;d<7;d++){
        printf("Valor do vetor na posicao [%d] eh: %d\n",d,vetordoido[d]);
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

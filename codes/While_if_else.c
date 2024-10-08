#include<stdio.h>

int main(){
    int maior_idade=0, menor_idade=0, contador=0, idade, p1=0, p2=0;
    while(idade!=-1){
        printf("Digite sua idade:\n");
        scanf("%d",&idade);
        if(idade==-1){
            break;
        }
        if(idade>=18){
            maior_idade = idade;
            p1++;
        }
        else if(idade<18){
            menor_idade = idade;
            p2++;
        }
        contador++;
    }
    printf("Maior idade: %d\n",maior_idade);
    printf("Menor idade: %d\n",menor_idade);
    printf("Pessoas maiores de idade: %d\n",p1);
    printf("Pessoas menores de idade: %d\n",p2);
    printf("Total de pessoas entrevistadas: %d\n",contador);
    return 0;
}

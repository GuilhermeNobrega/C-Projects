#include <stdio.h>
#include <stdlib.h>
int comparar(){
    char var1[10];
    char var2[10];
    int tamanho_var1;
    int tamanho_var2;
    printf("Digite o caractere da var1:\n");
    scanf("%s", &var1);
    printf("Digite o caractere da var2:\n");
    scanf("%s", &var2);
    tamanho_var1 = strlen(var1);
    tamanho_var2 = strlen(var2);
    if(tamanho_var1>tamanho_var2){
        printf("A string %s com tamanho %d eh maior que %s com tamanho %d",var1,tamanho_var1,var2,tamanho_var2);
    }
    else{
        printf("A string %s com tamanho %d eh maior que %s com tamanho %d",var2,tamanho_var2,var1,tamanho_var1);
    }
}

int main(){
    printf("Vamos testar:\n");
    comparar();
}

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a;
    int tentativa=3;
    printf("\t===============================================\n");
    printf("B-E-M\tV-I-N-D-O\t A-O\t J-O-G-O\n"); 
    printf("===============================================\n");
    printf("ESCOLHA UMA LETRA DE [A\t====== C]");
    scanf("%c",&a);
    getchar();
    if(a=='a'){
        printf("Voce caiu no buraco");
    }
    else if(a=='b'){
        printf("Voce pulou, mas caiu no buraco");
        while(tentativa<=0){
            printf("Deseja tentar sair do buraco?");
            scanf("%c",&tentativa);
            tentativa--;
            printf("%d",tentativa);
        }
    }
    else{
        printf("Voce pulou,caiu e morreu");
        
    }

    
    return 0;
}
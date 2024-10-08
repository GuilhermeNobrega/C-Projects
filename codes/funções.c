
#include <stdio.h>

int multiplica(int x, int y) {
return x*y;}

int main(){
    int a,b, resultado;
    scanf("%d",&a);
    scanf("%d",&b);
    resultado = multiplica(a,b);
    printf("O resultado da multiplicacao entre %d e %d vale %d",a,b,resultado);

}

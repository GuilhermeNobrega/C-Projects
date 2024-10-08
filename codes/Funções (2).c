# include<stdio.h>
funcao1(char a){
    //scanf("%c",&a);//
    printf("Variavel1 = %c\n",a);
    return a;
}

funcao2(char b){
    //scanf("%c",&b);//
    printf("Variavel2 = %c\n",b);
    return b;
}

int main(){
    char c,d, resultado;
    printf("Digite valor da variavel1:\n");
    scanf("%c",&c);
    resultado = funcao1(c);
    printf("Digite valor da variavel2:\n");
    scanf("%c",&d);
    resultado = funcao2(d);


}
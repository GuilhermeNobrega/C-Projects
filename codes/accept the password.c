# include <string.h>
# include <ctype.h>

int main(){
    char response;
    char changes[20];
    char password[] = "!2df3Xe?";
    //int quant = (isalnum(password));
    int quant=0;
    int length = strlen(password);
    printf("Password is %s\n",password);
    for(int c=0;c<length;c++){
        if(isalnum(password[c])){
            quant++;
        };
        if(ispunct(password[c])){
            printf("Caractere %c eh especial\n",password[c]);
        }
        if(isalpha(password[c])){
            printf("O caractere %c eh alfabetico\n",password[c]);
        }

    }
    printf("Numbers of password is %d\n",quant);
    printf("The length of password is %d\n",length);

    while(1){
    if(length <=10){
        printf("Pode aumentar o tamanho da senha. Deseja alterar?");
        scanf(" %c",&response);
        if(response == 's'||response=='S'){
            printf("Digite a nova senha com caracteres ai:");
            scanf("%s",&changes);
            int salvar = strlen(changes);
            if(salvar>10){
                    printf("Senha aceita: => %s",changes);
                    break;
            }
            else{
                system("cls");
                printf("Senha nova muito curta! Nao aceita! Tente novamente...\n");
            }
    }
      else{
            printf("Senha nao alterada!");
            break;
        }
    }
    }

return 0;
}

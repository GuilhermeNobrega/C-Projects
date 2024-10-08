# include <stdio.h>
# include <string.h>

int main(){
    char response;
    char changes[20];
    char password[] = "!2df3Xe";
    int length = strlen(password);
    printf("Password is %s\n",password);
    printf("The length of password is %d\n",length);

    if(length <=10){
        printf("Pode aumentar o tamanho da senha. Deseja alterar?");
        scanf("%c",&response);
        if(response == 's'){
            printf("Digite a nova senha com caracteres ai:");
            scanf("%s",&changes);
            int salvar = strlen(changes);
            if(salvar>10){
                    printf("Senha aceita: => %s",changes);
            }
            else{
                printf("Senha nova muito curta! Nao aceita!");
            }
        }
        else{
            printf("Senha nao alterada!");
        }
    }
return 0;
}

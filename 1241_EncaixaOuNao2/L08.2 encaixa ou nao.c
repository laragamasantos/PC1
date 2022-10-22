#include <stdio.h>
#include <string.h>

int main(){
    int qntd, i, j, encaixa, aux;
    char str1[1001], str2[1001];
    scanf("%i", &qntd);

    for(aux=0; aux<qntd; aux++){
        scanf("%s %s", &str1, &str2);

        if(strlen(str2) > strlen(str1)){
            printf("nao encaixa\n");
            encaixa = 0;
        }

        else if(strlen(str2) < strlen(str1) || strlen(str2) == strlen(str1)){
            i = strlen(str1) - strlen(str2);
            j = 0;
            for(i; i<=strlen(str1)-1; i++){ //aqui compara-se as posições, e não a qntd de elementos
                if (str1[i] == str2[j]){
                    j++;
                    encaixa = 1;
                } else{
                    encaixa = 0;
                    printf("nao encaixa\n");
                    break;
                }
            }
        }

        if (encaixa == 1)
            printf("encaixa\n");

    }

      return 0;
}

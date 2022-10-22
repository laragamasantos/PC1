#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int qntdCasos, i, j, w;
    char str[51];
    char aux[51];

    scanf("%i", &qntdCasos);
    getchar();
    for(i=0; i<qntdCasos; i++){ //percorre a quantidade de casos
        gets(str);
        if(str[0] != ' '){
            aux[0] = str[0];
            w = 1;
        }
        else if(str[0] == ' ')
            w=0;

        for(j=1; j<strlen(str); j++){ //percorre a string
            if(str[j]!=' ' && str[j-1]==' '){ //se str[j] for a primeira letra de uma palavra
                aux[w] = str[j];
                w++;
            }
        }
        str[j] = '\0';
        aux[w] = '\0';
        j = 1;
        printf("%s\n", aux);


    }

    return 0;
}

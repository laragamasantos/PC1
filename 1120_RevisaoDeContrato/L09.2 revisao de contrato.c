#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    int tecla, i, j, k, a;
    a = pow(10, 101);
    int vetor[a];
    char valor[a], aux[a];

    do{
        scanf("%i %i", &tecla, &vetor);
        while()

        j = 0;

        for(i=0; i<strlen(valor); i++){
            if(valor[i] != tecla){
                aux[j] = valor[i];
                j++;
            }
        }
        if(aux[0] == 0)
            aux[1] = '\0';

        printf("%s", aux);

    }while(tecla!=0 && vetor[0]!=0);


    return 0;
}

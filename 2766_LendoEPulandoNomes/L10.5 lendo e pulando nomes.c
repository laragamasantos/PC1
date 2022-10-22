#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//3 7 9
int main(){
    int i;
    char nome[11][31];

    for(i=1; i<=10; i++){ //em cada uma das 10 linhas da matriz será colocada uma palavra
        scanf("%s", &nome[i]);
        getchar();
        /*if(i==3)
            saida[0] = nome;
        else if(i==7)
            saida[1] = nome;
        else if(i==9)
            saida[2] = nome;
        nome[0] = '\0';*/
    }

    printf("%s\n%s\n%s\n", nome[3], nome[7], nome[9]);
    return 0;
}

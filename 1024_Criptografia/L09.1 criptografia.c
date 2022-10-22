#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    int linhas, i, j, k, a, b, m, q;
    scanf("%i ", &linhas);
    char mensagem[1001], codigo[1001], aux[1001];

    for(i=0; i<linhas; i++){
        gets(mensagem);

        k=0;
        for(j=0; j<strlen(mensagem); j++){ //desloca tres para a direita
            if((mensagem[j]>=65 && mensagem[j]<=90) || (mensagem[j]>=97 && mensagem[j]<=122)){
                codigo[k] = mensagem[j] + 3;
            k++;
            } else{
               codigo[k] = mensagem[j];
               k++;
            }
        }
        codigo[k] = '\0';

        m=0;
        a = k-1;
        for(a; a>=0; a--){ //inverte string
            aux[m] = codigo[a]; //copia codigo para a string aux de trás para frente
            m++;
        }
        aux[m] = '\0';

        if(m-1 % 2 == 0) //se  aux tem numero par de caracteres (desconsiderando \0)
            b = (m-1)/2;
        else
            b = m/2;

        q=0;
        for(q=0; q<b; q++){
            codigo[q] = aux[q];
        }

        for(b; b<strlen(aux); b++){ //pega segunda metade e volta 1 para a esquerda
            codigo[b] = aux[b] - 1;
            //q++;
        }
        codigo[b] = '\0';

        printf("%s\n", codigo);
        mensagem[0] = '\0';
        codigo[0] = '\0';
        aux[0] = '\0';

    }


    return 0;
}

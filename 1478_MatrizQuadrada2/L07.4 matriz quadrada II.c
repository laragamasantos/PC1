#include <stdio.h>

int main(){
    int entrada=1, i, j, valorLinha=0, valorColuna=0, aux, a, b;
    while(entrada != 0){

        a=0;
        b=0;
        aux=0;
        scanf("%d", &entrada);
        int M[entrada][entrada];



        do{
            for(j=a; j<entrada; j++){ //colunas
            valorColuna+=1;
            M[aux][j] = valorColuna;

            }
            for(i=b; i<entrada; i++){ //linhas
                valorLinha+=1;
                M[i][aux] = valorLinha;
            }

            aux++;
            a++;
            b++;
            valorColuna=0;
            valorLinha=0;
        }while(a<entrada && b<entrada);


        for(i=0; i<entrada; i++){ //imprime matriz
            for(j=0; j<entrada; j++){
                if(j==(entrada-1)){ //ultimo valor de cada linha
                    printf("%3d", M[i][j]);
                }
                else
                    printf("%3d ", M[i][j]);
            }

            printf("\n");
        }

        printf("\n");

    }

    return 0;
}

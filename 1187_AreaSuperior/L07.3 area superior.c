#include <stdio.h>

int main(){
    char operacao;
    double M[12][12], elementos, resultado=0.0;
    int i, j, a=1, b=10;
    scanf("%c", &operacao);

    for(i=0; i<12; i++){ //linhas
        for(j=0; j<12; j++){
            scanf("%lf", &elementos); //preenche a matriz
            M[i][j] = elementos;
        }
    }

    if(operacao == 'S'){
        for(i=0; i<5; i++){
            for(j=a; j<=b; j++){
                 resultado += M[i][j];

            }
            a++;
            b--;
        }
        printf("%.1lf\n", resultado);
    }
    else if(operacao == 'M'){
        for(i=0; i<5; i++){
            for(j=a; j<=b; j++){
                 resultado += M[i][j];

            }
            a++;
            b--;
        }
        resultado = resultado/30.0;
        printf("%.1lf\n", resultado);
    }




    return 0;
}

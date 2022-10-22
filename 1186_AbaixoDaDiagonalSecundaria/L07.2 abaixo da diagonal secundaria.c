#include <stdio.h>

int main(){
    char operacao;
    int i ,j, k=1;
    float M[12][12], elementos, resultado=0.0;
    scanf("%c", &operacao);

    for(i=0; i<12; i++){ //linhas
        for(j=0; j<12; j++){
            scanf("%f", &elementos); //preenche a matriz
            M[i][j] = elementos;
        }
    }

    if(operacao == 'S'){
        for(i=11; i>=1; i--){ //percorre linhas da linha 11 até a 1
            for(j=11; j>=k; j--){ //colunas de 11 a 1, percorrendo 1 coluna a menos a cada loop
                resultado += M[i][j];
            }
            k++;
        }
        printf("%.1f\n", resultado);
    }
    else if(operacao == 'M'){
        for(i=11; i>=1; i--){ //percorre linhas da linha 11 até a 1
            for(j=11; j>=k; j--){ //colunas de 11 a 1, percorrendo 1 coluna a menos a cada loop
                resultado += M[i][j];
            }
            k++;
        }
        resultado = resultado/66.0;
        printf("%.1f\n", resultado);
    }

    return 0;
}

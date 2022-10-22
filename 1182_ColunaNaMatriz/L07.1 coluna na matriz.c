#include <stdio.h>

int main (){
    int coluna, i, j;
    char operacao;
    float elementos, resultado=0, M[12][12];

    scanf("%i %c", &coluna, &operacao);

    for(i=0; i<12; i++){ //percorre as linhas
        for(j=0; j<12; j++){ //percorre as colunas
            scanf("%f", &elementos);
            M[i][j] = elementos;
        }
    }

    if(operacao == 'S'){
        for(i=0; i<12; i++){ //percorre linhas
            resultado += M[i][coluna];
        }
        printf("%.1f\n", resultado);
    } else if(operacao == 'M'){ //percorre linhas
        for(i=0; i<12; i++){
            resultado += M[i][coluna];
        }
        resultado = resultado/12;
        printf("%.1f\n", resultado);
    }

    return 0;
}

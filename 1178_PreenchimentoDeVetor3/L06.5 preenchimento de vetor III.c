#include <stdio.h>
#include <math.h>

int main(){
    double valor, fracao, N[100];
    int contador; //contador deve ser inteiro
    scanf("%lf", &valor);

    for(contador=0; contador<100; contador++){
        fracao = (0.5);
        N[contador] = valor * pow(fracao, contador);
        printf("N[%i] = %.4lf\n", contador, N[contador]);
    }

    return 0;
}

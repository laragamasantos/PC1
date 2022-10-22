#include <stdio.h>
#include <math.h>

int main (){
    int v[10], contador, valor;
    scanf("%i", &valor);
    for(contador=0; contador<10; contador++){
        v[contador] = (valor * pow(2, contador));
        printf("N[%i] = %i\n", contador, v[contador]);
    }

    return 0;
}

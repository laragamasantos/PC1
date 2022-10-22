#include <stdio.h>
#include <math.h>

int main(){
int linhas, contador, quadrado, cubo;
scanf("%i", &linhas);

for(contador=1; contador<=linhas ; contador++){
    quadrado = pow(contador,2);
    cubo = pow(contador,3);
    printf("%i %i %i\n", contador, quadrado, cubo);
}

return 0;
}

//1 numero da linhas
//numero da linha ao quadrado
//numero da linha ao cubo

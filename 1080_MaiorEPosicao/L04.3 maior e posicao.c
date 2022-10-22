/*#include<stdio.h>

int imprimir_solucao (int maior_numero){
int numero;
numero = main();
maior_numero = 0;
if(numero>maior_numero){
    maior_numero = numero;
    }
}

int main(){
    int numero, posicao;
    for(posicao=1; posicao<=100; posicao++){
        scanf("%i", &numero);
}
    return numero;
    imprimir_solucao(numero);
    printf("%i\n%i\n", numero, posicao);
}
*/
#include <stdio.h>

int main(){
int numeroEntrada, maiorNumero, posicao, contador;

for(contador=1; contador<=100; contador++){
    scanf("%i", &numeroEntrada);
    if(numeroEntrada>maiorNumero){
        maiorNumero=numeroEntrada;
        posicao=contador;
    }
}

printf("%i\n", maiorNumero);
printf("%i\n", posicao);

return 0;
}



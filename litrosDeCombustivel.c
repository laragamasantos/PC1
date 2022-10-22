#include <stdio.h>
#include <stdlib.h>

int main(){
float velocidade = 80, tempo, distancia, litrosGastos;

tempo = 35/60;
distancia = velocidade*tempo;
litrosGastos = distancia/12;
printf("A quantidade de litros de combustivel gasta e: %.2f \n", litrosGastos);

system("pause");
return 0;
}

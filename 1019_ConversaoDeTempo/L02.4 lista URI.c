#include <stdio.h>

int main (){
int N, horas, minutos, segundos;
scanf("%i", &N);

horas = N/3600;
minutos = (N%3600)/60;
segundos = N - 3600*horas - 60*minutos;

printf("%i:%i:%i\n", horas, minutos, segundos);

return 0;
}

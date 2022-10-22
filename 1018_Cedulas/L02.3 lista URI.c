#include <stdio.h>

int main(){
int valor, cem, cinquenta, vinte, dez, cinco, dois, um;
scanf("%i", &valor);

cem = valor / 100;
cinquenta = (valor%100)/50;
vinte = (valor - 100*cem - 50*cinquenta)/20;
dez = (valor - 100*cem - 50*cinquenta - 20*vinte)/10;
cinco = (valor - 100*cem - 50*cinquenta - 20*vinte - 10*dez)/5;
dois = (valor - 100*cem - 50*cinquenta - 20*vinte - 10*dez - 5*cinco)/2;
um = valor - 100*cem - 50*cinquenta - 20*vinte - 10*dez - 5*cinco - 2*dois;

printf("%i\n", valor);
printf("%i nota(s) de R$ 100,00\n", cem);
printf("%i nota(s) de R$ 50,00\n", cinquenta);
printf("%i nota(s) de R$ 20,00\n", vinte);
printf("%i nota(s) de R$ 10,00\n", dez);
printf("%i nota(s) de R$ 5,00\n", cinco);
printf("%i nota(s) de R$ 2,00\n", dois);
printf("%i nota(s) de R$ 1,00\n", um);

return 0;
}

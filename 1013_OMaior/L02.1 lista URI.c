#include <stdio.h>

int main(){
int a, b, c, maiorAB, maiorGeral;
scanf("%i %i %i", &a, &b, &c);
maiorAB = (a + b + abs(a - b))/2;
maiorGeral = (maiorAB + c + abs(maiorAB - c))/2;
printf("%i eh o maior\n", maiorGeral);

return 0;
}


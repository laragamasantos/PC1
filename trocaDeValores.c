#include <stdio.h>
#include <stdlib.h>

int main(){
int A, B, C;

printf(" Insira o valor de A: ");
scanf("%i",&A);
printf(" Insira o valor de B: ");
scanf("%i",&B);
C = A;
A = B;
B = C;
getchar();
printf(" O valor de A se tornou: %i", A);
printf("\n O valor de B se tornou: %i  \n", B);

system("pause");
return 0;
}

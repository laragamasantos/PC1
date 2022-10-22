#include <stdio.h>
#include <stdlib.h>

int main(){
float X, Y, Z, W, media;

printf("Introduza quatro valores: ");
scanf("%f %f %f %f", &X, &Y, &Z, &W);
getchar();
media = (X + Y + Z + W)/4;
printf("A media dos quatro valores e: %.2f  \n", media);

system("pause");
return 0;
}

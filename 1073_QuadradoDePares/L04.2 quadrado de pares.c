#include<stdio.h>
#include<math.h>

int main(){
int N, contador, potencia;

scanf("%i", &N);
for(contador=1; contador<=N; contador++){
    if(contador%2 == 0){
        potencia = pow(contador,2);
        printf("%i^2 = %i\n", contador, potencia);
    }
}

return 0;
}

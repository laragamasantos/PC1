#include<stdio.h>

int main(){
int N, X, contador, in=0, out=0; //N e a quantidade de numeros
                                 //X recebe os numeros
                                 //contador sao os numeros ja escritos
                                 //in recebe a quantidade de numeros dentro do intervalo

scanf("%i", &N); //recebe a qntd de numeros

for(contador=0; contador<N; contador++){ //recebe os numeros
    scanf("%i", &X);
    if(X>=10 && X<=20){
        in = in+1;
    }else{
        out = out+1;
    }
}
printf("%i in\n%i out\n", in, out);

return 0;
}

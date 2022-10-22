#include <stdio.h>

void sequencia(int M, int N){
    if(N < M){
        for(N; N<=M; N++){
            printf("%i ", N);
        }
    } else if(M < N){
        for(M; M<=N; M++){
            printf("%i ", M);
        }
    } else{
        printf("%i ", M);
    }
}


void soma(int M, int N){
    int sum=0;
    if(N < M){
        for(N; N<=M; N++){
            sum = sum+N;
        }
    }else if(M < N){
        for(M; M<=N; M++){
            sum = sum+M;
        }
    }
    printf("Sum=%i\n", sum);
}

int main(){
    int M, N;
    do{
        scanf("%i %i", &M, &N);
        if (M>0 && N>0){
            sequencia(M, N);
            soma(M, N);
        } else
            return 0;
    } while (M!=0 && N!=0);

return 0;
}

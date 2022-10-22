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
    int M, N, i=0;
    int vetor[10000];
    do{
        scanf("%i %i", &vetor[i], &vetor[i+1]);
        i += 2;
    } while (vetor[i-2]!=0 && vetor[i-1]!=0);

return 0;
}

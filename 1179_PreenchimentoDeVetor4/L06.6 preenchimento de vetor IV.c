#include <stdio.h>

int main(){
    int numeros, pares[5], impares[5], contadorGeral, contadorPares, contadorImpares, contadorFinal;
    contadorImpares=0;
    contadorPares=0;

    for(contadorGeral=0; contadorGeral<15; contadorGeral++){
        scanf("%i", &numeros);

        if(numeros%2 == 0){ //se o numero e par
            pares[contadorPares] = numeros;
            contadorPares++;

            if(contadorPares == 5){ //se o vetor par encher
                contadorPares = 0;
                while(contadorPares<=4){
                    printf("par[%i] = %i\n", contadorPares, pares[contadorPares]);
                    contadorPares++;
                }
                contadorPares = 0;
            }
        }else{ //se o numero e impar
            impares[contadorImpares] = numeros;
            contadorImpares++;

            if(contadorImpares == 5){ //se o vetor impar encher
                contadorImpares = 0;
                while(contadorImpares<=4){
                    printf("impar[%i] = %i\n", contadorImpares, impares[contadorImpares]);
                    contadorImpares++;
                }
                contadorImpares = 0;
            }
        }

    }
    for(contadorFinal=0; contadorFinal<contadorImpares; contadorFinal++){
        printf("impar[%i] = %i\n", contadorFinal, impares[contadorFinal]);
    }
    for(contadorFinal=0;contadorFinal<contadorPares; contadorFinal++){
        printf("par[%i] = %i\n", contadorFinal, pares[contadorFinal]);
    }


    return 0;
}

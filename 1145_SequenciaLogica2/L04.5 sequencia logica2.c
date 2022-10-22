
#include <stdio.h>

int main(){
int numerosEmCadaLinha, fimDaSequencia, contadorSequencia, contadorLinha, numeroImpresso;
scanf("%i %i", &numerosEmCadaLinha, &fimDaSequencia);
numeroImpresso=0;

for(contadorSequencia=1; contadorSequencia<=(fimDaSequencia/numerosEmCadaLinha); contadorSequencia++){
    contadorLinha=1;
    for(contadorLinha = 1; contadorLinha<=numerosEmCadaLinha; contadorLinha++){
        numeroImpresso=numeroImpresso+1;
        if(contadorLinha<numerosEmCadaLinha)
            printf("%i ", numeroImpresso);
        else
        printf("%i\n", numeroImpresso);


    }

}
return 0;
}

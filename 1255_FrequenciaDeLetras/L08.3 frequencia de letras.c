#include <stdio.h>
#include <string.h>

int main(){

    int qntd, h, i, j, k, a, b, c, x=0, frequencia=0, maiorFrequencia=0, posicao;
    char casoTeste[201];
    char letras[27] = "abcdefghijklmnopqrstuvwxyz";
    int frequencias[26]; //cada posição será uma letra do alfabeto, suas frequencias serao contabilizadas
    char aux[201];

    scanf("%i", &qntd);

    for(h=0; h<=qntd; h++){
       gets(casoTeste); //colocando frases na string

       /*for(b=0; b<201; b++){
           for(c=0; c<53; c+=2){
                if(aux[i] == letras[j] || aux[i] == letras[a]){
           }

       }*/



       for(i=0; i<strlen(casoTeste); i++){ //percorre posições de casoTeste
        for(j=0; j<53; j+=2){ //percorre posições de letras
            a = j+1;
            if(casoTeste[i] == letras[j] || casoTeste[i] == letras[a]){
                for(k=i; k<201; k++){ //percorre posições de casoTeste
                    if(casoTeste[i] == casoTeste[k]){
                        frequencia++;
                        posicao = i;
                    }

                    if(frequencia>=maiorFrequencia){
                        maiorFrequencia = frequencia;
                        frequencias[x] = casoTeste[posicao];
                        x++;

                    }
                }
            }
        }

        }
    }


    /*for(i=0; i<200; i++){ //percorre posições de aux
        for(j=0; j<52; j+=2){ //percorre posições de letras
            a = j+1;
            if(aux[i] == letras[j] || aux[i] == letras[a]){

            }
        }
    }*/

    return 0;
}

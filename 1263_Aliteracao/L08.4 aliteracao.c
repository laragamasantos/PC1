#include <stdio.h>
#include <string.h>
#include <ctype.h>

//infelizmente não funcionou

int main(){
    int a=0, i, j, k=0, l, qntd=0, revisar=1;
    char palavras[1000];
    char aux[1000];
    char letra;

    while(gets(palavras)){
        while(palavras[a] != '\0'){
            palavras[a] = tolower(palavras[a]);
            a++;
        }

        aux[0] = palavras[0];

        j=1;
        for(i=0; i<strlen(palavras); i++){ //percorre a string palavras
            if(palavras[i] == ' '){
                k = i+1;
                aux[j] = palavras[k]; //coloca a primeira letra de cada palavra em string auxiliar
                j++;
            }
        }

        for(l=0; l<strlen(aux); l++){ //percorre string auxiliar
            if(l == 0){
                letra = aux[l];
            } else{
            if(letra == aux[l]){
                if(revisar == 1){
                qntd++;
                revisar = 0;
                }
            }
            if(letra != aux[l]){
                letra = aux[l];
                revisar = 1;
            }
        }

        }

        printf("%i\n", qntd);
        qntd = 0;
        k=0;
        a=0;
        revisar = 1;
        l = 0;

    }
    return 0;
}

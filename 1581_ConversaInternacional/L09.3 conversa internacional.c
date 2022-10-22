#include <stdio.h>
#include <string.h>

int main(){
    int casosTeste, qntdPessoas, i, j, k=0, aux;
    char str[21], letras[1000];
    scanf("%i", &casosTeste);

    for(i=0; i<casosTeste; i++){
        scanf("%i ", &qntdPessoas);
        k=0;
        aux = 0;

        for(j=0; j<qntdPessoas; j++){
            gets(str);
            letras[k] = str[0];
            if(letras[k] != letras[k-1] && k>=1){ //aux sera 1 quando duas pessoas falarem linguas diferentes
                aux = 1;
            }
            if(j != qntdPessoas-1)
                str[0] = '\0';
            k++;
        }


        if(aux == 1)
            printf("ingles\n");
        else
            printf("%s\n", str);
    }

    return 0;
}

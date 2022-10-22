#include <stdio.h>
#include <string.h>

/*a primeira linha do nome misturado sempre terá um
número par de caracteres e a segunda linha, sempre terá o mesmo número
de caracteres da primeira linha ou um caractere a menos do que a primeira linha.*/

int main(){
    int casosTeste, i, j, m, k, p;
    char str1[101], str2[101], nome[202];
    scanf("%i ", &casosTeste);

//dois da str1, dois da str2, dois da str1...

    for(i=0; i<casosTeste; i++){
        k=0;
        p=2;
        gets(str1);
        //getchar();
        gets(str2);
        //getchar();

        for(j=0; j<strlen(str1); j+=2){
            nome[k] = str1[j]; //0
            if(j+1 != '\0')
                nome[k+1] = str1[j+1]; //1
            k+=4; //4
        }

        if(strlen(str1) == strlen(str2))
            nome[k] = '\0';
        else
            nome[k-1] = '\0';

        for(m=0; m<strlen(str2); m+=2){
            nome[p] = str2[m];
            if(m+1 != '\0')
                nome[p+1] = str2[m+1];
            p+=4;
        }

        printf("%s\n", nome);
        str1[0] = '\0';
        str2[0] = '\0';
        nome[0] = '\0';

    }

    return 0;
}

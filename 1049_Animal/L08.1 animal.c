#include <stdio.h>

int main(){
    char palavra1[20], palavra2[20], palavra3[20];
    scanf("%s", &palavra1);
    scanf("%s", &palavra2);
    scanf("%s", &palavra3);

    if(palavra1[0] == 'v'){
        if(palavra2[0] == 'a'){ //ave
            if(palavra3[0] == 'c'){
                printf("aguia\n");
            }else
                printf("pomba\n");
        }else{ //mamifero
             if(palavra3[0] == 'o'){
                printf("homem\n");
            }else
                printf("vaca\n");
        }
    }


    if(palavra1[0] == 'i'){
        if(palavra2[0] == 'i'){ //inseto
            if(palavra3[2] == 'm'){
                printf("pulga\n");
            }else
                printf("lagarta\n");
        }else{ //anelideo
             if(palavra3[0] == 'h'){
                printf("sanguessuga\n");
            }else
                printf("minhoca\n");
        }
    }

    return 0;
}

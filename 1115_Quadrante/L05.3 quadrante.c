#include <stdio.h>

void encontraQuadrante(int X, int Y){
    if(X > 0){
        if(Y > 0)
            printf("primeiro\n");
        else if(Y < 0)
           printf("quarto\n");
    }else if(X < 0){
        if(Y > 0)
            printf("segundo\n");
        else if(Y < 0)
           printf("terceiro\n");

    }

}


int main(){
    int X, Y;

    do{
    scanf("%i %i", &X, &Y);
    encontraQuadrante(X, Y);
    }while(X!=0 && Y!=0);

    return 0;
}

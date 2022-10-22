#include <stdio.h>

void encontra_valores(int X, int Y){
    if(X < Y){ //se X é maior que Y
        X+=1;
        for(X; X<Y; X++){
            if(X%5==2 || X%5==3)
                printf("%i\n", X);
        }
    }else if(X>Y){ //se X é menor que Y
        Y+=1;
        for(Y; Y<X; Y++){
            if(Y%5==2 || Y%5==3)
                printf("%i\n", Y);
        }

    }

}

int main(){
    int X, Y;
    scanf("%i %i", &X, &Y);
    encontra_valores(X, Y);
    return 0;
}



#include <stdio.h>

int main()
{
    int v[10], i, valor;
    for(i=0; i<10; i++){
        scanf("%i", &valor);
        v[i]=valor;
        if(v[i]<=0)
        v[i]=1;
        printf("X[%i] = %i\n", i, v[i]);
    }
    return 0;
}


#include <stdio.h>

int main(){
 float N1, N2, N3, N4, media, exame, mediaFinal;
 scanf("%f %f %f %f", &N1, &N2, &N3, &N4);
 media = (2*N1 + 3*N2 + 4*N3 + N4)/10;
 printf("Media: %.1f\n", media);

 if(media>=7.0){
    printf("Aluno aprovado.\n");
 } else if(media<5.0){
    printf("Aluno reprovado.\n");
 } else if(media>=5.0 && media<=6.9){
    printf("Aluno em exame.\n");
    scanf("%f", &exame);
    printf("Nota do exame: %.1f\n", exame);
    mediaFinal = (media+exame)/2;
    if(mediaFinal>=5.0){
        printf("Aluno aprovado.\n");
    } else{
        printf("Aluno reprovado.\n");
    }
    printf("Media final: %.1f\n", mediaFinal);
 }


return 0;
}


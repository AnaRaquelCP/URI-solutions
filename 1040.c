#include <stdio.h>
 
int main()
{
    float N1, N2, N3, N4, nota, Media, mediafinal;
      
    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);
    Media=(((N1*2)+(N2*3)+(N3*4)+(N4*1))/10);
    printf("Media: %.1f\n", Media);
    if (Media >= 7.0){
        printf("Aluno aprovado.\n");
    } else if (Media<5.0){
        printf("Aluno reprovado.\n");
    } else if((Media>=5.0)&&(Media<=6.9)){
        printf("Aluno em exame.\n");
        scanf("%f", &nota);
        printf("Nota do exame: %.1f\n", nota);
        mediafinal = (nota+Media)/2;
        if(mediafinal>=5.0) printf("Aluno aprovado.\n");
        if(mediafinal<=4.9) printf("Aluno reprovado.\n");
        printf("Media final: %.1f\n",mediafinal);
    }
 
    return 0;
}

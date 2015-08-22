#include <stdio.h>
#include <string.h>
  
int main ()
{
    int numers[] = {6,2,5,5,4,5,6,3,7,6};
    int v, qnt, soma=0;
    char num[102];
  
    scanf("%d", &qnt);
  
    while (qnt--){
        scanf("%s", num);
        v = strlen(num);
        soma = 0;
        for (int i = 0; i < v; i++)
            soma += numers[(int)num[i] - '0'];
        printf("%d leds\n", soma);
    }
    return 0;
}

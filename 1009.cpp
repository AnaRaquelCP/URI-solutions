#include<cstdio>
#include<stdlib.h>
 
int main (){
 char nome[150];
 float A,B,X;
 scanf("%s", &nome);
 scanf("%f",&A);
 scanf("%f",&B);
 X=(A+((B/100)*15));
 printf("TOTAL = R$ %.2f\n",X);
 system ("PAUSE");  
}

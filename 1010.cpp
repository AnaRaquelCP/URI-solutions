#include<cstdio>
#include<stdlib.h>
 
int main (){
 int a,b,c,d;
 float A,B,X;
 scanf("%d %d %f",&a,&b,&A);
  scanf("%d %d %f",&c,&d,&B);
 X=((b*A)+(d*B));
 printf("VALOR A PAGAR: R$ %.2f\n",X);
 system ("PAUSE");  
}

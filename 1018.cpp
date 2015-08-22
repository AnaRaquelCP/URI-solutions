#include<cstdio>
#include<stdlib.h>
 
int main (){
 int a,cont;
 scanf ("%d",&a);
 printf("%d\n",a);
 cont=0;
  while(a>=100){
              a=a-100;
             cont++;
             }
 printf("%d nota(s) de R$ 100,00\n",cont);
  cont=0;
 while(a>=50){
              a=a-50;
             cont++;
             }
 printf("%d nota(s) de R$ 50,00\n",cont);
  cont=0;
 while(a>=20){
              a=a-20;
             cont++;
             }
 printf("%d nota(s) de R$ 20,00\n",cont);
  cont=0;
 while(a>=10){
              a=a-10;
             cont++;
             }
 printf("%d nota(s) de R$ 10,00\n",cont);
  cont=0;
 while(a>=5){
              a=a-5;
             cont++;
             }
 printf("%d nota(s) de R$ 5,00\n",cont);
  cont=0;
 while(a>=2){
              a=a-2;
             cont++;
             }
 printf("%d nota(s) de R$ 2,00\n",cont);
 cont=0;
 while(a>=1){
              a=a-1;
             cont++;
             }
 printf("%d nota(s) de R$ 1,00\n",cont);
 cont=0;
 system ("PAUSE");  
}

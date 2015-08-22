#include<cstdio>
#include<stdlib.h>
 
int main (){
 float a,b,c,tri,cir,tra,qua,ret;
 scanf("%f",&a);
 scanf("%f",&b);
 scanf("%f",&c);
 tri=(a*c)/2;
 cir=(3.14159*c*c);
 tra=((a+b)/2)*c;
 qua=b*b;
 ret=a*b;
 printf("TRIANGULO: %.3f\n",tri);
 printf("CIRCULO: %.3f\n",cir);
 printf("TRAPEZIO: %.3f\n",tra);
 printf("QUADRADO: %.3f\n",qua);
 printf("RETANGULO: %.3f\n",ret);
 system ("PAUSE");  
}

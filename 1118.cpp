#include <stdio.h>
#include <stdlib.h>
 
int main (){
  float x,n;
    int c=0,esc=1;
    while(esc==1){
    while(c!=2){
    scanf("%f",&x);
    if(x>=0 && x<=10){
        c++;
        n=n+x;
    }
    else printf("nota invalida\n");
    }
    printf("media = %.2f\n",n/2);
    do{
    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%d",&esc);
    }while(esc!=1 && esc!=2);
    c=0;
    n=0;
}
 
    return 0;
}

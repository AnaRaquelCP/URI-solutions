#include <stdio.h>
#include <stdlib.h>
 
int main (){
  float n,x,y,i;
    scanf("%f",&n);
    for(i=1;i<=n;i++){
    scanf("%f %f",&x,&y);
    if(x==0) printf("0.0\n");
    else if(y==0) printf("divisao impossivel\n");
    else printf("%.1f\n",x/y);
}
 
    return 0;
}

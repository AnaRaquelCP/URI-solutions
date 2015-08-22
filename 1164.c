#include <stdio.h>
 
int main(){
    unsigned short int qnts;
    unsigned long int x;
 
    scanf("%hu",&qnts);
 
    while(qnts--){
        scanf("%ld",&x);
 
        if(x == 6 || x == 28 || x == 496 || x == 8128 || x == 33550336)
            printf("%ld eh perfeito\n",x);
        else
            printf("%ld nao eh perfeito\n",x);
    }
}

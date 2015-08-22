#include <stdio.h>
  
 int main(){
 
     double num;
     int notas[] = {10000, 5000, 2000, 1000, 500, 200, // 0-5
                             100, 50, 25, 10, 5}; // 6-10
     scanf("%lf", &num);
     int n = num * 100;
 
     printf("NOTAS:\n");
     for(int i=0; i<=5; ++i){
        printf("%d nota(s) de R$ %d.00\n", n/notas[i], notas[i]/100);
        n%=notas[i];
        //num-= (num/notas[i])*notas[i];
     }
     printf("MOEDAS:\n");
     for(int i=6; i<=10; ++i){
         printf("%d moeda(s) de R$ %.2lf\n", n/notas[i], (double)notas[i]/100.0);
         n%=notas[i];
     }
     printf("%d moeda(s) de R$ 0.01\n", n);
}

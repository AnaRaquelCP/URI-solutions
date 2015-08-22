#include <stdio.h>
 
int main()
{
    int n;
   double pi,res;
   pi=3.14159;
   scanf("%d", &n);
   res=((4.0/3)*pi*n*n*n);
   printf("VOLUME = %.3lf\n", res);
   return 0;
}

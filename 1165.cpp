#include <cstdio>
 
int main()
{
    int n;
    scanf("%d", &n);
 
    while(n--){
 
        int num, cont = 0;
        scanf("%d", &num);
        for (int i = 2; i < num; ++i)
        {
            if (num%i==0)
                cont++;
        }
 
        if(!cont && num!=0)
            printf("%d eh primo\n", num);
        else
            printf("%d nao eh primo\n", num);
    }
}

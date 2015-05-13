#include <stdio.h>
#include <stdlib.h>

int Otlichnici(int n);

int main()
{
    int n;
    scanf("%d",&n);//broj na uchenici;
    printf("%d",Otlichnici(n));
    return 0;
}

int Otlichnici(int n)
{
    int mark,a = 0,b = 0;
    while(a< n)
    {
        do{
            scanf("%d",&mark);
        }while(mark<2 || mark > 6);
        if (mark == 6) b++;
        a++;
    }
    return b;
}

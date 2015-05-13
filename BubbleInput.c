#include <stdio.h>
#include <stdlib.h>

int Del(int n);

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",Del(n));
    return 0;
}


int Del(int n)
{
    int i = 1, s =0;
    while(i<=n)
    {
        if(n % i == 0)
            s++;
        i++;
    }
    return s;
}

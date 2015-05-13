#include <stdio.h>
#include <stdlib.h>


int fact(int n);

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",fact(n));
    return 0;
}
int fact(int n)
{
    int i = 1,a=1;
    while(i <= n)
    {
        a = a * i;
        i++;
    }
    return a;
}

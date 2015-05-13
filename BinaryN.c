#include <stdio.h>
#include <stdlib.h>

int Bin(int n);

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",Bin(n));
}

int Bin(int n)
{
    int s=0;
    while(n != 0)
    {
        if(n % 2 == 1) s++;
        n/=2;
    }
    return s;
}

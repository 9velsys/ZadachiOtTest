#include <stdio.h>
#include <stdlib.h>

void Print(int n);

int main()
{
    int n;
    scanf("%d",&n);

    Print(n);
    return 0;
}

void Print(int n)
{
    if(n>0)
    {
        printf("%d",n);
        Print(n-1);
    }
}

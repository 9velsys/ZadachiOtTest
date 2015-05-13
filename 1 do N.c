#include <stdio.h>
#include <stdlib.h>

int output(int n);

int main()
{
    int n;
    scanf("%d",&n);
    output(n);
    return 0;
}

int output(int n)
{
    int i = 0;
    while (i <= n)
    {
        i++;
        printf("%d",i);
    }
}

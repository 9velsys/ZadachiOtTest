#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n);

int main()
{
    int n ;
    scanf("%d",&n);
    printf("%d",fibonacci(n));
}
int fibonacci(int n)
{
    int a = 1,b = 0,c;
    while(n>0)
    {
        c = a + b;
        a = b;
        b = c;
        n--;
    }
    return c;
}

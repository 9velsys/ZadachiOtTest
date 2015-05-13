#include <stdio.h>
#include <stdlib.h>

int Stepen(int a, int n);

int main()
{
    int a,n;
    scanf("%d",&a);
    scanf("%d",&n);
    printf("%d",Stepen(a,n));
}
int Stepen(int a, int n)
{
    int z = 1,m,i=0;
    if(n > 1) m = n;
    else m = -n;
    while(i < m)
    {
        z = z * a;
        i++;
    }
    if(n<0) z = 1 / z;
    return z;
}

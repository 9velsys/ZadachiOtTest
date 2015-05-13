#include <stdio.h>
#include <stdlib.h>

void chetni(int m,int n);

int main()
{
    int m,n;
    do{
        scanf("%d",&m);
        scanf("%d",&n);
    }while (m>n);
    chetni(m,n);
}
void chetni(int m,int n)
{
    while(m <= n)
    {
        if(m%2 == 0) printf("%d ",m);
        m++;
    }
}

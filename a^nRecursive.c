#include <stdio.h>
#include <stdlib.h>

int StepenRecursive(int a, int n);

int main()
{
    int a ,n, m;
    float z;
    scanf("%d",&a);
    scanf("%d",&n);
    if(n > 1) m = n;
    else m = -n;
    z = StepenRecursive(a,m);
    if(n<0) z = 1/ z;
    else if(n ==0) z=1;
    printf("%.2f",z);
}
int StepenRecursive(int a, int m)
{
    if(m>1)
        return a * StepenRecursive(a,m-1);
}

#include <stdio.h>
#include <stdlib.h>

int Search(int a,int n);

int main()
{
    int a,n;
    printf("Number we are searching for :");
    scanf("%d",&a);
    printf("\nNumber in which we are searching :");
    scanf("%d",&n);
    if (Search(a,n)) printf("Yes");
    else printf("No");
}

int Search(int a,int n)
{
    while (n > 0)
    {
        int z = n % 10;
        if (z == a) return 1;
        n = n / 10;
    }
    return 0;
}

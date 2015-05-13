#include <stdio.h>
#include <stdlib.h>
void change();
int a,b;
int main()
{
    scanf("%d",&a);
    scanf("%d",&b);
    change (a,b);
    printf("%d,%d",a,b);
}
void change ()
{
    a = a+b;
    b = a - b;
    a = a - b;
}

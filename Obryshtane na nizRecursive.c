#include <stdio.h>
#include <stdlib.h>

void obratno();

int main()
{
    obratno();
    return 0;
}

void obratno()
{
    char n;
    scanf("%c",&n);
    if (n != '.') obratno();
    printf("%c",n);
}

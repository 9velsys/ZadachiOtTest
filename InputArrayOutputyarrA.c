#include <stdio.h>
#include <stdlib.h>
#define MAX 20



void InputOutput(int a);
char z[MAX];


int main()
{
    int a;
    scanf("%d",&a);
    InputOutput(a);
}

void InputOutput(int a)
{
    if(a>0)
    {
        scanf("%c",&z[a]);
        scanf("%c",&z[a]);
        InputOutput(a-1);
    }
    printf("%c",z[a]);
}

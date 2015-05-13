#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,t,avr = 0,Max,Min,i=0;
    scanf("%d",&n);
    scanf("%d",&t);
    Max = t;
    Min = t;
    while(i + 1 < n)
    {
        scanf("%d",&t);
        if(t > Max) Max = t;
        if (t < Min) Min = t;
        i++;
        avr += t;
    }
    avr = avr / n;
    printf("Min = %d\n",Min);
    printf("Max = %d\n",Max);
    printf("Avrage = %d",avr);
    return 0;
}

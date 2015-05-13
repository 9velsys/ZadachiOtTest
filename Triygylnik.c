#include <stdio.h>
#include <stdlib.h>

void draw(int h);

int main()
{
    int h;
    scanf("%d",&h);
    draw(h);
    return 0;
}

void draw(int h)
{
    int i = 1,s;
    while(i<=h)
    {
        s = 0;
        while(s < h - i)
        {
              printf(" ");
              s++;
        }
        s = 0;
        while (s < i)
        {
            printf("*");
            s++;
        }
         printf("\n");
        i++;

    }

}

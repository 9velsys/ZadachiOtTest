#include <stdio.h>
#include <string.h>


int check();
char num[100];
int main()
{
    scanf("%s",num);
    if(check()) printf("Yes");
    else printf("No");
}
int check()
{
    int i = 0,len;
    len = strlen(num);
    if(num[i]=='-') return 0;
    while (i< len)
    {
        if(num[i]=='.'||num[i]==',')
        {
            i++;
             while (i< len)
             {
                 if (num[i]!='0') return 0;
                 i++;
             }
        }
        i++;
    }
    return 1;
}

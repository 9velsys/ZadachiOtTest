#include <stdio.h>
#include <stdlib.h>
#define len 5


int main()
{
    int i,j;
	int a[len];
	for(i=0;i<len;i++)
        scanf("%d",&a[i]);
    int b,c,d;
    for(i=0;i<=len;i++){
        d = a[i];
        b = i;
        for(j=i+1;j<len;j++){
            if(a[j]>d){ //Za nizhodqsht red smenete < s >
                d=a[j];
                b=j;
            }
            c=a[b];
            a[b]=a[i];
            a[i]=c;
        }
    }
	for(b=0;b<len;b++) printf("%d  ",a[b]);
	return 0;
}


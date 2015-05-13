#include <stdio.h>
#include <stdlib.h>

int main(){
    int n=5,i,j;
    int a[5];

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int meh;

    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                meh=a[j];
                a[j]=a[j+1];
                a[j+1]=meh;
            }
        }
    }

    for(i=0;i<n;i++){
        printf("%d",a[i]);;
    }

    return 0;
}

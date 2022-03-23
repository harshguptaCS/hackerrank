#include <stdio.h>

int main()
{
    int i,t;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        int n,j,x=0,temp,r;
        scanf("%d",&n);
        temp=n;
        while(n>0){
            r=n%10;
            if(r!=0&&temp%r==0){
                x++;
            }
            n=n/10;
        }
        a[i]=x;
    }
    for(i=0;i<t;i++){
        printf("%d\n",a[i]);
    }

    return 0;
}

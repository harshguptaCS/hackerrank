#include <stdio.h>
#include<stdlib.h>
int main()
{
    int t,a,b,c,i;
    scanf("%d",&t);
    int ar[t];
    for(i=0;i<t;i++){
        scanf("%d %d %d",&a,&b,&c);
        if(abs(b-c)>abs(a-c))
        ar[i]=1;
        else if(abs(b-c)<abs(a-c))
        ar[i]=2;
        else
        ar[i]=3;
    }
    for(i=0;i<t;i++){
        if(ar[i]==1)
        printf("Cat A\n");
        else if(ar[i]==2)
        printf("Cat B\n");
        else
        printf("Mouse C\n");
    }

    return 0;
}

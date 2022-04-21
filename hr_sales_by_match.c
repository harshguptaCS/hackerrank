#include <stdio.h>

int main()
{
    int i,n,max,s=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    max++;
    int b[100]={0};
    for(i=0;i<n;i++){
        b[a[i]]++;
    }
    for(i=0;i<max;i++){
        if(b[i]>1){
            s+=b[i]/2;
        }
    }
    printf("%d",s);

    return 0;
}

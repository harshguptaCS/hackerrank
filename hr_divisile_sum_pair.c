#include <stdio.h>

int main()
{
    int n,k,i,j,x=0;
    scanf("%d %d",&n,&k);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if((a[i]+a[j])%k==0){
                x++;
            }
        }
    }
    printf("%d",x);

    return 0;
}

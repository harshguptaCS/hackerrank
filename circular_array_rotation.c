#include<stdio.h>
int main(){
    int n,k,q,i,j,temp;
    scanf("%d %d %d",&n,&k,&q);
    int a[n],s[q];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<q;i++){
        scanf("%d",&s[i]);
    }
    for(i=1;i<=k%n;i++){
        temp=a[n-1];
        for(j=n-1;j>0;j--){
            a[j]=a[j-1];
        }
        a[0]=temp;
    }
    for(i=0;i<q;i++){
        printf("%d\n",a[s[i]]);
    }
}

#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,l,m,k,x=0,temp,r,rev;
    scanf("%d %d %d",&l,&m,&k);
    for(i=l;i<=m;i++){
        temp=i;
        rev=0;
        while(temp>0){
            r=temp%10;
            rev=rev*10+r;
            temp=temp/10;
        }
        if(abs(rev-i)%k==0){
            x++;
        }
    }
    printf("%d",x);
}

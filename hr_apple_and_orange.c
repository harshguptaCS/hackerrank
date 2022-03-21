#include <stdio.h>

int main()
{
    int s,t,a,b,m,n;
    scanf("%d %d",&s,&t);
    scanf("%d %d",&a,&b);
    scanf("%d %d",&m,&n);
    int ap[m], ora[n],i,x=0,y=0;
    for(i=0;i<m;i++){
        scanf("%d",&ap[i]);
        if(s<=ap[i]+a &&ap[i]+a<=t){
            x++;
        }
    }
    for(i=0;i<n;i++){
        scanf("%d",&ora[i]);
        if(s<=ora[i]+b && ora[i]+b<=t){
            y++;
        }
    }
    printf("%d\n%d",x,y);

    return 0;
}

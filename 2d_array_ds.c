#include <stdio.h>

int main()
{
    int i,j,a[6][6],b[16],x=0,max;
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            b[x++]=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
        }
    }
    max=b[0];
    for(i=0;i<16;i++){
        if(max<b[i]){
            max=b[i];
        }
    }
    printf("%d",max);

    return 0;
}

#include <stdio.h>

int main()
{
    int n,i,fl=0;
    scanf("%d",&n);
    while(1){
        if(n%2==0){
            if(n/2==1){
                fl=1;
                break;
            }
            else{
                n=n/2;
            }
        }
        else{
            break;
        }
    }
    if(fl==1){
        printf("number is power of 2");
    }
    else{
        printf("Not power of 2");
    }

    return 0;
}

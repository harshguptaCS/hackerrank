#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int t,i,l;
    scanf("%d%*c",&t);
    int ar[t];
    for(i=0;i<t;i++){
        char s[10000];
        scanf("%[^\n]%*c",s);
        l=strlen(s);
        int a[l],b[l],j,A,B,fl=0;
        for(j=0;s[j];j++){
            a[j]=s[j];
            b[l-1-j]=s[j];
            s[j]='\0';
        }
        for(j=0;j<l-1;j++){
            A=abs(a[j]-a[j+1]);
            B=abs(b[j]-b[j+1]);
            if(A!=B){
                fl=1;
                break;
            }
        }
        if(fl==0)
        ar[i]=1;
        else
        ar[i]=0;
       
    }
    for(i=0;i<t;i++){
        if(ar[i]==1)
        printf("Funny\n");
        else
        printf("Not Funny\n");
    }

    return 0;
}

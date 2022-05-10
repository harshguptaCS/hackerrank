#include <stdio.h>

int main(void) {
	int i,j,n,x,y,t;
	scanf("%d",&t);
	int b[t];
	for(j=0;j<t;j++){
	    scanf("%d %d %d",&n,&x,&y);
	    int a[n],ans=0;
	    for(i=0;i<n;i++){
	        scanf("%d",&a[i]);
	        if(a[i]<=x && a[i]%y==0){
	            ans++;
	        }
	    }
	    b[j]=ans;
	}
	for(i=0;i<t;i++){
	    printf("%d\n",b[i]);
	}
	
	return 0;
}


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int find_nth_term(int n, int a, int b, int c) {
    int s;
    static int i=4;
    if(n==1){
        return a;
    }
    else if(n==2){
        return b;
    }
    else if(n==3){
        return c;
    }
    
    s=a+b+c;
    a=b;
    b=c;
    c=s;
    if(i==n){
        return s;
    }
    else{
        i++;
        return find_nth_term(n,a,b,c);
    }
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}

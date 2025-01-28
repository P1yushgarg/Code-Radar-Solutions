#include <stdio.h>
void main(){
    int n,i,s=0;
    scanf("%d",&n);
    for(i=1;i<n+1;i++){
        s=s+i;
    }
    printf("%d",s);
}
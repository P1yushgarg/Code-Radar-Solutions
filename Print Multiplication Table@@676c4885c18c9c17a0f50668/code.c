#include <stdio.h>
void main(){
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("%d%d=%d",n,i,n*i);
    }
}
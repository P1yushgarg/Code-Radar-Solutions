#include <stdio.h>
void main(){
    int n,i;
    scanf("%d",&n);
    for(i=1;i<n+1;i++){
        printf("%d x %d = %d\n",n,i,n*i);
    }
}
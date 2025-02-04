#include <stdio.h>
void main(){
    int n,i;
    scanf("%d",&n);
    for(i=0;i<10;i++){
        printf("%d%d=%d",n,i,n*i);
    }
}
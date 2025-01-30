#include <stdio.h>
void main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<n+1;i++){
        for(j=1;j<i+1;i++){
            printf("%d ",j);
        }
        printf("\n");
    }
}
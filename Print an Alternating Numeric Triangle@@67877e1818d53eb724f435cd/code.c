#include <stdio.h>
void main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<n+1;i++){
        for(j=0;j<n;j++){
            printf("%d",j%2);
        }
        printf("\n");
    }
}
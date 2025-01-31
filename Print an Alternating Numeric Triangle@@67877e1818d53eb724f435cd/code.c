#include <stdio.h>
void main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<n+1;i++){
        for(j=0;j<i;j++){
            printf("1\n");
            printf(" %d",j%2);
        }
        
        printf("\n");
    }
}
#include <stdio.h>
void main(){
    int n,i,j,k;
    scanf("%d",&n);
    for(i=1;i<n+1;i++){
        for(j=n;j>i;j--){
            printf(" ");
        }
        for(k=1;k<i+1;k++){
            printf("*");
        }
        printf("\n");
    }
}
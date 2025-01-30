#include <stdio.h>
void main(){
    int n,i,j,k;
    scanf("%d",&n);
    for(i=1;i<n+1;i++)
    {
        for(k=n;k>0;k--){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
}
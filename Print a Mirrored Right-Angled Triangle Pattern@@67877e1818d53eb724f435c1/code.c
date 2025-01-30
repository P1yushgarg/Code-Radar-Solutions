#include <stdio.h>
void main(){
    int n,i;
    scanf("%d",&n);
    for(i=1;i<n+1;i++){
        for(j=n;j>0;j--){
            printf(" ");
        }
        printf("\n");
    }
}
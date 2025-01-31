#include <stdio.h>
void main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=n;i>0;i--){
        for(j=0;j<n;j++){
            printf("%c",'A'+j);
        }
        printf("\n");
    }
}
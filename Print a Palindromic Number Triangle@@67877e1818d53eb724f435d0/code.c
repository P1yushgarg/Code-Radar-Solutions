#include <stdio.h>
void main(){
    int n,i,j,k,l;
    scanf("%d",&n);
    for (i=1;i<n+1,i++){
        for(j=n;j>0;j--){
            printf(" ");
            for(k=1;k<n+1;k++){
                printf("%d",k);
                for (l=2;l<n+1;l++){
                    printf("%d",l);
                }
            }
        }
        printf("\n");
    }
}
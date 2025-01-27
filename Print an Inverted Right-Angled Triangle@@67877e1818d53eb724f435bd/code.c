#include <stdio.h>
void main(){
    int a,i,j;
    scanf("%d",&a);
    for(i=1;i<a+1;i++){
        for (j=i;j>0;j--){
            printf("*");
        }
        printf("\n");
    }
}
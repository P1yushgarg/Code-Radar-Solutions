#include <stdio.h>
void main(){
    int a,i,j;
    scanf("%d",&a,&i,&j);
    for (i=a;i>=1;i--){
        for (j=i;j>0;j--){
            printf("*");
        }
        printf("\n");
    }
}
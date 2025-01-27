#include <stdio.h>
void main(){
    int a,i,j;
    scanf("%d",&a);
    for (i=1;i<a+1;i++){
        for (j=1;j>=i;j++){
            printf("*");
        }
        printf("\n");
    }
}
#include<stdio.h>
void main(){
    int n,num=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        c=1;
        for(j=1;j<=i;j++){
            printf("%d",num++);
        }
        printf("\n");
    }
}
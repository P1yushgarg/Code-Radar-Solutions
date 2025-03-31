#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            printf(" ");
        }
        for(int k=1;k<=i+1;k++){
            printf("%d",k);
        }
        for(int r=i;r>=1;r--){
            printf("%d",r);
        }
        printf("\n");
    }
}
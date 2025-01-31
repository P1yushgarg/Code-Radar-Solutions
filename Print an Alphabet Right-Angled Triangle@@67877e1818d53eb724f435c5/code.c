#include <stdio.h>
void main(){
    int n,i,j;
    scanf("%c",&n);
    for(i='A';i<n+1;i++){
        for(j='A';j<i+1;j++){
            printf("%c",j);
        }
        printf("\n");
    }
}
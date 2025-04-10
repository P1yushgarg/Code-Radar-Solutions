#include<stdio.h>
int solve(int a[],int n){
    int i,j;
    for( i=0;i<n;i++){
        for( j=i+1;j<n;j++){
            if(a[i]==a[j]){
                printf("%d",a[i]);
            }
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    solve(a,n);
    return 0;
}
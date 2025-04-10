#include<stdio.h>
int solve(int a[],int n){
    int c,i,j;
    for( i=0;i<n;i++){
        c=0;
        for( j=1;j<n;j++){
            if(a[i]==a[j]){
                c++;
            }
        }
    }
    if(c>=1){
        printf("%d",a[i]);
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
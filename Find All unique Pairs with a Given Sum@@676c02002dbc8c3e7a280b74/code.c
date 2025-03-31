#include<stdio.h>
void solve(int a[],int n,int t){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[j]+a[j+1]==t){
                return a[j],a[j+1];
            }
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int t;
    scanf("%d",&t);
    solve(a,n,t);
    return 0;
}
#include<stdio.h>
void solve(int a[],int n,int t){
    for(int i=0;i<n;i++){
        if(a[i]+a[i+1]==t){
            printf("%d %d\n",a[i],a[i+1]);
            return;
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
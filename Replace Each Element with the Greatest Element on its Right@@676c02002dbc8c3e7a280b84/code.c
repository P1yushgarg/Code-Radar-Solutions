#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(int i=0;i<n-1;i++){
        a[n]=-1;
        if(a[i]>max){
            max=a[i];
            a[i]=max;
        }
    }
}
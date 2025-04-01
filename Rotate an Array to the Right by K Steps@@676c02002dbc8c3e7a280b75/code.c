#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int k,a1[n];
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        a1[(i+k)%n]=a[i];
    }
    for(int i=0;i<n;i++){
        printf(" %d",a[i]);
    }
    return 0;
    
    
}
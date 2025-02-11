#include <stdio.h>
void main(){
    int n,i,max;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++){
        if(a[i]>max){
            printf("%d",a[i-1]);
            break;
        }
    }
}
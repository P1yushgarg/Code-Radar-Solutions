#include<stdio.h>
void main(){
    int n,i,max,min;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[n]);
    }
    max=a[0];
    min=a[0];
    for(i=0;i<n;i++){
        if(a[i]>max){
            printf("%d",a[i]);
        }
        else if(a[i]<min){
            printf("%d",a[i]);
        }

    }
}
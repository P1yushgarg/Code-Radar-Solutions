#include <stdio.h>
void main(){
    int n,i,sorted=1;
    scanf("%d",&n);
    int a[n],b[n];
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++){
        if(a[i]<a[i-1]){
            sorted=0;
            break;
        }
    }
    if(sorted){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
}

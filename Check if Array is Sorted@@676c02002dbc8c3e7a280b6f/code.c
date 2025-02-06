#include <stdio.h>
void main(){
    int n,i,max;
    scanf("%d",&n);
    int a[n],b[n];
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    b[n]=a[n];
    max=a[0];
    for(i=1;i<n;i++){
        if(a[i]>a[0]){
            a[n]=printf("%d",a[i]);
        }
    }
    if(a[n]==b[n]){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
}

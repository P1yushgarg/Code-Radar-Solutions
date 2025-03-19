#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int a[n],i,found=-1;
    for( i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int target;
    scanf("%d",&target);
    for( i=0;i<n;i++){
        if(target==a[i]){
            found=i;
            break;
        }
    }
    printf("%d",i);

}
#include <stdio.h>
void main(){
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    e=0;
    o=0;
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            e++;
        }
        else if(a[i]%2!=0){
            o++;
        }

    }
    printf("%d",e);
    printf(" %d",o);
}
#include <stdio.h>
void main(){
    int n,i,c,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
       for(j=1;j<n+1;j++){
        c=0;
        if (a[i]==a[j]){
            c++;

        }
        printf("%d %d",a[i],c);
       }
    }
    
    
}
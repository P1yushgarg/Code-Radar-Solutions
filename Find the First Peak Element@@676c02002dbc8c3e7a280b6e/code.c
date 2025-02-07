#include <stdio.h>
void main(){
    int n,i,m;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    m=a[0];
    for(i=0;i<n;i++){
        if(a[i]>m){
            m=a[i];
             printf("%d\n", m);
        }
        else{
            printf("%d",-1);
        }
    }
    
}

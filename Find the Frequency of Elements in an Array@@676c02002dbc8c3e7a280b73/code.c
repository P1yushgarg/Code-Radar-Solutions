#include <stdio.h>
void main(){
    int n,i,c=0,o;
    scanf("%d%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&o);
    for(i=0;i<n;i++){
        if(a[i]==o){
            c++;
        }
    }
    printf("%d %d",n,c);
}
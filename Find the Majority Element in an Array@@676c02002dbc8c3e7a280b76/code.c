#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",a[i]);
    }
    int c=0,j;
    for(j=0;j<n;j++){
    
        if(a[j]==a[j+1]){
            c++;
        }
    }
    if(c>=2){
        printf("%d",a[j]);
    }
    else(c<2){
        printf("-1");
    }
    
}
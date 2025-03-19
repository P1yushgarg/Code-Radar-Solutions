#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",a[i]);
    }
    for(int j=0;j<n;j++){
        int c=0;
        if(a[j]==a[j+1]){
            c++;
        }
    }
    if(c>=2){
        printf("%d",a[j]);
    }
}
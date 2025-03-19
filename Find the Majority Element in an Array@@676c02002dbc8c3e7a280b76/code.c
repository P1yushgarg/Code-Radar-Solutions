#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int c=0;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(a[i]==a[j]){
            count++;
        }
        }   
    }
    if(count>c){
        printf("%d",a[j]);
    }
    else{
        printf("-1");
    }
    
}
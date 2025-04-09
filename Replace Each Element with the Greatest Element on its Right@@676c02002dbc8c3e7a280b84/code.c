#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<n;i++){
        int max=0;
        for(int j=i+1;j<n;j++){
            max=a[i+1];
            if(a[j]>max){
                max=a[j];
            }
        }
        a[i]=max;
    }
    for(int i=0;i<n-1;i++){
        printf("%d ",a[i]);

    }
    printf("-1");
    return 0;
}
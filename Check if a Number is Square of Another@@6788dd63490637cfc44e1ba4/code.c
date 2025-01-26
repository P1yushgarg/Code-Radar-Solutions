#include <stdio.h>
void main(){
    int a,b;
    scanf("%d %d",&a,&b);
    a=b*b;
    if(a==b){
        printf("Yes");
    }
    else{
        printf("No");
    }
}
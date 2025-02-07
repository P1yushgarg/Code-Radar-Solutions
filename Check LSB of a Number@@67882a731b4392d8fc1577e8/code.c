#include <stdio.h>
void main(){
    int a,b;
    scanf("%d",&a);
    b=a%10;
    if(b==1){
        printf("Set");
    }
    else if(a%2==1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
}
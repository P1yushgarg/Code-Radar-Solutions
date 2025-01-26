#include <stdio.h>
void main(){
    int a,b;
    scanf("%d %d",&a,&b);
    b=a*a;
    if(b==a){
        printf("Yes");
    }
    else{
        printf("No");
    }
}
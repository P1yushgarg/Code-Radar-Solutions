#include <stdio.h>
void main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf(a);
    }
    else if(b>a && b>c){
        printf(b);
    }
    else if(c>a && c>b){
        printf(c);
    }
}
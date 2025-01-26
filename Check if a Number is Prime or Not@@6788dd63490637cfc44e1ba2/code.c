#include <stdio.h>
void main(){
    int a,i,c;
    scanf("%d",&a);
    for (i=1;i<n+1;i++){
        if(a%i==0){
            c++;
        }
    }
    if(c==2){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}
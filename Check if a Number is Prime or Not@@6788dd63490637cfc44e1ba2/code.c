#include <stdio.h>
void main(){
    int a,i,c=0;
    scanf("%d",&a);
    for (i=1;i<a+1;i++){
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
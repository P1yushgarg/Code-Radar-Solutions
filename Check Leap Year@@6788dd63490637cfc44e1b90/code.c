#include <stdio.h>
void main(){
    int a;
    scanf("%d",&a);
    if (a%400==0 && a%100==0){
        print("Leap Year");
    }
    else if (a%4==0 && a%100!==0){
        print("Leap Year");

    }
    else{
        printf("Not a Leap Year");
    }
}
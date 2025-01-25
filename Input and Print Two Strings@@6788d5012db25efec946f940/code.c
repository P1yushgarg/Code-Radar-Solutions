#include <stdio.h>
void main(){
    char a[100],b[100],c[200];
    scanf("%c %c",&a,&b);
    c=a+" and "+b;
    printf("You entered: %s",c);
}
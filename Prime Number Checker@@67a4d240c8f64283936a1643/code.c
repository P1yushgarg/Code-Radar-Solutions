#include<stdio.h>
int isPrime(int num){
    c=0
    for(i=1;i<num;i++){
        if(num%i==0){
            c++;
        }
    }
    if(c==1){
        return 1;
    }
    else{
        return 0;
    }

}
int main(){
    int t;
    scanf("%d",&t);
    while(true){
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
    }
    return 0;
}
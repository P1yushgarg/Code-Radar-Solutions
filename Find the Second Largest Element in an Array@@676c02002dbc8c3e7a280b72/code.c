#include <stdio.h>
void main(){
    int n, i, max, second_max;
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    max = a[0];
    second_max = -1;  
    for(i = 0; i < n; i++){
        if(a[i] > max){
            second_max = max;
            max = a[i];
        }
        else if(a[i] > second_max && a[i] != max){
            second_max = a[i];
        }
    }
    if(second_max != -1){
        printf("%d", second_max);
    }
    else {
        printf("%d",-1);
    },,
}

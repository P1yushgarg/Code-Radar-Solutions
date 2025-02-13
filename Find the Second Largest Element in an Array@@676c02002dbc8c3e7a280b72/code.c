// #include <stdio.h>
// #include <limits.h>
// void main() {
//     int n, i, max, second_max;
//     scanf("%d", &n);
    
//     int a[n];
//     for(i = 0; i < n; i++) {
//         scanf("%d", &a[i]);
//     }

//     max = second_max = INT_MIN;

//     for(i = 0; i < n; i++) {
//         if(a[i] > max) {
//             second_max = max;
//             max = a[i];
//         }
//         else if(a[i] > second_max && a[i] != max) {
//             second_max = a[i];
//         }
//     }

//     if(second_max != INT_MIN) {
//         printf("%d", second_max);
//     }
//     else {
//         printf("-1");
//     }
// }


#include<stdio.h>
#include<limits.h>
void main(){
    int i,n,max,second_max;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    max=second_max=INT_MIN;
    for(i=0;i<n;i++){
        if(a[i]>max){
            second_max=max;
            max=a[i];
            
        }
        else if(a[i]>second_max&&a[i]!=max){
            second_max=a[i];
        }

    }
    if(second_max!=INT_MIN){
        printf("%d",second_max);
    }
    else{
        printf("-1");
    }
}
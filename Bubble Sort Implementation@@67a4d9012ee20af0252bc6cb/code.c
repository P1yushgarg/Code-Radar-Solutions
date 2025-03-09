#include<stdio.h>
int bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int c=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=c;
            }
        }
    }
    printArray(arr[],n){
        for(int i=0;i<n-1;i++){
            return printf("%d",arr[i]);
        }
    }
}

#include<stdio.h>
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1])
            int c=arr[j];
            arr[j+1]=arr[j];
            arr[j+1]=c;
        }
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n-1;i++){
        return arr[i];
    }
}
void main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    selectionSort(arr,n);
    printArray(arr,n);
}
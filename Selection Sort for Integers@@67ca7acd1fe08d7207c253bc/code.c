#include<stdio.h>
void selectionSort(int arr[ ],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int s=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=s;
            }
        }
    }
}
void printArray(int arr[ ],int n){
    for(int i=0;i<n;i++){
        printf(" %d",arr[i]);
    }

}
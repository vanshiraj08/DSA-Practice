#include<stdio.h>
int BinarySearch(int arr[], int size, int element){
    int low=0,high=size;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==element){
            return mid;
        }
        if(arr[mid]<element){
            
        }
    }
}
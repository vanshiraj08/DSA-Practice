#include<stdio.h>
#include<stdlib.h>
void display(int arr[], int n){
    for (int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int IndInsertion(int arr[],int size, int capacity, int index,int element){
    if(size>=capacity){
        return -1;
    }
    for(int i=size-1;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;
}
int main(){
    int arr[100]={4,2,6,11,100,72};
    int size=6;
    printf("Array before insertion:\n");
    display(arr,size);
    IndInsertion(arr,6,100,4,56);
    size+=1;
    printf("Array after insertion:\n");
    display(arr,size);
    return 0;
}
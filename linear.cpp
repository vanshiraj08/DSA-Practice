#include<iostream>
using namespace std;
int linearsearch(int arr[], int n, int key){
    int i;
    for(i= 0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr, n, key,i;
    cout<<"Enter the number of elements in the array\n";
    cin>>n;
    cout<<"Enter the elements of the array\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched in the array\n";
    cin>>key;
    cout<<"The element is found in the array at index"<<linearsearch(arr,n,key);
    
    return 0;
}
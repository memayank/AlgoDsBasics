#include<iostream>
using namespace std;

void insertionSort(int arr[], int size){
    int temp;
    for(int i=1; i<size; i++){
        temp = arr[i];
        for(int j= i-1; j>=0;j--){
            if(temp < arr[j]){
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){

    int arr[] = {12,1,9,2,7,3,8,4,-1};
    int size = sizeof(arr)/sizeof(int);
    insertionSort(arr, size);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
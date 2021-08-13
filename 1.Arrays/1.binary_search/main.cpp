//binary search applicable only on sorted order

#include<iostream>
using namespace std;

int binarySearch(int *arr, int key, int size){
    
    int start = 0;
    int end = size-1;

    while (start <= end){
        int mid = (start+ end)/2;

        if(arr[mid] == key){
            return mid;

        }else if(arr[mid] < key){
            start = mid +1;
        }else{
            end = mid -1;
        }
    }
    return -1;
}

int main(){

    int arr[] ={1,34,56,78,99,123,345,678,890};

    int key = 990;

    int n = sizeof(arr)/sizeof(int);

    cout<<"Position "<<binarySearch(arr, key, n);
    return 0;
}
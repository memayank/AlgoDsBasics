#include<iostream>
using namespace std;



bool reverseArray(int *arr, int size){

    int start = 0;
    int end = size-1;
    int temp;

    while (start <end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    return true;
}

int main(){

    int arr[] ={1,34,56,78,99,123,345,678,890};
    int size = sizeof(arr)/sizeof(int);

    cout<<reverseArray(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}
//comparing the element with the next element 
// over the iteration the  largest number will be placed at the last of the list

#include<iostream>
#include<vector>
using namespace std;

int main(){

    int arr[] = {12,3,4,7,18,10,14,16};
    int n = sizeof(arr)/sizeof(int);
    int temp;

    for(int i=0; i<n; i++){
        for(int j=0; j< n -i -1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] =  temp;
            }
        }
    }

    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
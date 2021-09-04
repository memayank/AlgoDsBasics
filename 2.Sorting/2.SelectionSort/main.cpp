#include<iostream>
#include<vector>
using namespace std;

int main(){

    int arr[] = {1,4,2,8,4,9,12};

    int n = sizeof(arr)/sizeof(int);
    int temp;

    for(int i=0; i<n;i++){
        for(int j=i+1; j<n;j++){
            if(arr[j] < arr[i] ){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
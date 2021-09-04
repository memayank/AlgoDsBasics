//prefix sum problem 
//do some pre computation and store the sum of the first n element at the nth place in the array 
#include<iostream>
using namespace std;


int main(){

    int arr[] = {1,-4,6,7,9,-8};

    int n = sizeof(arr)/sizeof(int);

    int prefixSumArr[n];

    prefixSumArr[0] = arr[0];

    int largest;
    for(int i=1; i<n; i++){
        prefixSumArr[i] = prefixSumArr[i-1] + arr[i];
    }

    for(int i=0; i<n; i++){
        cout<<prefixSumArr[i]<<" ";
    }

    for(int i=0; i<n; i++){
        if(prefixSumArr[i] >largest){
            largest = prefixSumArr[i];
        }

        for(int j =i+1; j<n; j++){
            if(prefixSumArr[j] - prefixSumArr[i] >largest){
                cout<<prefixSumArr[j]<<" "<<prefixSumArr[i]<<endl;
                largest = prefixSumArr[j] - prefixSumArr[i];
            }
        }
    }
    cout<<largest;
    
    return 0;
}
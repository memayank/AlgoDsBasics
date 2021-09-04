//to solve maximum sum subarray problem in linear time
#include<iostream>
using namespace std;

int main(){

     int arr[] = {11,-4,6,7,9,-8,3,4,9, -43};

    int n = sizeof(arr)/sizeof(int);

    int currentSubarraySum = arr[0];

    int maxSum = arr[0];

    for(int i=1; i<n;i++){
        if(currentSubarraySum <0){
            if(arr[i]<currentSubarraySum){
                currentSubarraySum = arr[i];
            }
        }else{
            if(currentSubarraySum + arr[i] >=0){
                currentSubarraySum += arr[i];
                if(currentSubarraySum> maxSum){
                    maxSum = currentSubarraySum;
                }
            }else{
                if(currentSubarraySum> maxSum){
                    maxSum = currentSubarraySum;
                }
                currentSubarraySum = 0;
            }
        }
    }

    cout<<maxSum;

    return 0;
}
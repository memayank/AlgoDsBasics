#include<iostream>
using namespace std;


int main(){

    int arr[][5] = {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
    };

    int key = 18;
    int rowStart = 0;
    int rowEnd = 5;
    

    int rowMid = (rowStart+ rowEnd)/2;

    for(int j=0; j<5;j++){
        rowStart=0; rowEnd =5;
        while (rowStart <= rowEnd){
            rowMid = (rowStart+rowEnd)/2;
            cout<<j<<" ,"<<rowMid<<endl;
            if(arr[j][rowMid] == key){
                cout<<j+1<<" "<<rowMid+1;
                break;
            }else if(arr[j][rowMid] > key){
                rowEnd = rowMid -1;
            }else{
                rowStart = rowMid +1;
            }
        }
    }
    return 0;
}
#include<iostream>
using namespace std;

//there is only two possibility at the ith position 1 or 0
//we can confirm it is 0 or 1 by having and with the mask which will have 1 at the ith position and rest is 0
//we can get the mask by doing 1<<i

int getIthBit(int n, int i){
    int mask = (i<<i);
    if(n & mask){
        return 1;
    }
    return 0;
}

int clearBitFromItoJ(int x,int i, int j){
    //to clear bit from i to j the bits between i and j should be 0 other bits should be 1
    //that we can get from (-1)<<(j+1) | (2^i -1) => (-1)<<(j+1) | (1<<i)-1
    int mask = (~0)<<(j+1) | (1<<i)-1;
//111010111010101
//111110000000111
    // cout<<mask<<endl;

    return x&mask;
}

int main(){

    int n =8;
    int i=4;
    
    // cout<<getIthBit(n,i);
    cout<<clearBitFromItoJ(207, 0,5);

    return 0;
}
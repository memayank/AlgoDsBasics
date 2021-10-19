#include<iostream>
using namespace std;

//left shit -> move the bits from right to left
//5 << 2  => 10100 = 4*5 
// i.e.   a<<b  means  a*2^b


//right shift -> move the bits from left to right
// 9 >> 2 => 1001>>2 => 0001 =1
//i.e.  a>>b means a/2^b

int main(){

    int a=19;
    int b=2;
    cout<<"Right shift  "<< (a>>b)<<endl;
    cout<<"Left shift   "<<(a<<b)<<endl; 
    return 0;
}






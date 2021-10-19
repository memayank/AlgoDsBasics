#include<iostream>
using namespace std;


//if(number & 1 ==0) the number is even
//if number & 1 ==1 then the number is odd


int main(){

    int  number= 109981;

    if(number & 1 ==1){
        cout<<"The Number is odd"<<endl;
    }else if(number & 1 ==0){
        cout<<"The Number is even"<<endl;
    }

    return 0;
}
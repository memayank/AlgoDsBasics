#include <iostream>
#include <vector> 
using namespace std;



int binToDec(string bin){
    int dec = 0;
    int multiplier = 1;
    for(int i=bin.length()-1; i>=0;i--){
        dec += (bin[i] - '0')*multiplier;
        multiplier *= 2;
    }
    return dec;
}


string decToBin(int dec,int size){
    string bin="";

    while (dec >0)
    {
        if(dec %2 ==1){
            bin = "1" + bin;
        }else{
            bin = "0" + bin;
        }
        dec =  dec/2;
    }

    while (bin.length() < size)
    {
        bin  = "0"+ bin;
    }
    return bin;
}


int main() {
	// your code goes here
	
	string temp;
	int t;
	vector<int> numbers;
	int count;
	int expo;
	bool flag;
	cin>>t;
	
	while(t--){
	    numbers.clear();
	    cin>>count;
	    expo = 1;
	    
	    while(count--){
	        cin>>temp;
	        numbers.push_back(binToDec(temp));
	        expo *= 2;
	    }
	    for(int i=0;i<expo; i++){
	        flag = false;
	        for(int j=0; j<numbers.size(); j++){
	            if(numbers[j] == i){
	                flag= true;
	            }
	        }
	        if(!flag){
                cout<<decToBin(i, numbers.size())<<endl;
                i=expo;
                cout<<endl;
	        }
	    }
	}
	
	return 0;
}

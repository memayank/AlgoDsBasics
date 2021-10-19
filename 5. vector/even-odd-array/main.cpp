#include<iostream>
#include<vector>
using namespace std;


int main(){

    int n;
    vector<int> a;
    int temp;
    cin>>n;
    int j;

    for(int i=0;i<n;i++){
        cin>>temp;
        a.push_back(temp);
    }

    for(int i=0;i<n;i++){
        if(i%2==0){
            if(a[i]%2 != 0){
                j = i+1;
                while(j<n){
                    if(a[j]%2 ==0){
                        temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                        j = n;
                        i++;
                    }
                    j++;
                }
            }
        }else{
            if(a[i]%2 ==0){
                j = i+1;
                while(j<n){
                    if(a[j]%2 !=0){
                        temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                        j = n;
                        i++;
                    }
                    j++;
                }
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
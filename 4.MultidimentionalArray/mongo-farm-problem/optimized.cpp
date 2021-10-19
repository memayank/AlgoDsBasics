// using prefix sum matrix,
#include<iostream>
using namespace std;


int main(){

     char arr[][8] = {
        {'#', '.', '#', '.','.', '.', '.', '.'},
        {'#', '.', '#', '.','#', '.', '.', '#', },
        {'.', '.', '#', '.','.', '.', '.', '#', },
        {'.', '.', '.', '.','#', '#', '.', '.', },
        {'#', '.', '#', '.','#', '.', '.', '.', },
        {'#', '.', '.', '#','.', '.', '#', '.', },
        {'#', '.', '.', '.','.', '#', '.', '.', },
    };

    int n=7;
    int m =6;
    int maxTrees = 0;
    int minTrees = 99999999;
    int tempTrees;

    int aux[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j] =='#'){
                aux[i][j] = 1;
            }else{
                aux[i][j] = 0;
            }
        }
    }

    
     

    for(int i=0;i<n;i++){
        for(int j=0; j<m;j++){
            if(j-1>=0){
                aux[i][j] += aux[i][j-1];
            }
            if(i-1>=0){
                aux[i][j] += aux[i-1][j];
            }
            if(j-1 >=0 && i-1>=0){
                aux[i][j] -= aux[i-1][j-1];
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0; j<m;j++){
            cout<<aux[i][j]<<"\t";
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++){
        for(int j=0; j<m;j++){
            tempTrees= 0;
            minTrees=9999999;

            minTrees = min(minTrees, aux[i][j]);
            minTrees = min(minTrees, aux[i][m] - aux[i][j]);
            minTrees = min(minTrees, aux[n][j] - aux[i][j]);
            minTrees = min(minTrees, aux[n][m] - aux[i][m] - aux[n][j] + aux[i][j]);

            maxTrees = max(maxTrees, minTrees);
        }
    }

    cout<<maxTrees;

    return 0;
}
#include<iostream>
#include<vector>
using namespace std;


int main(){

    char arr[][8] = {
        {'#', '.', '#', '.','#', '.', '.', '.'},
        {'#', '.', '#', '.','#', '.', '.', '#', },
        {'.', '.', '#', '.','.', '.', '.', '#', },
        {'.', '.', '.', '.','#', '#', '.', '.', },
        {'#', '.', '#', '.','#', '.', '.', '.', },
        {'#', '.', '.', '#','.', '.', '#', '.', },
        {'#', '.', '.', '.','.', '#', '.', '.', },
    };

    int maxTrees=0;
    int minTrees=9999999;
    int tempTrees;

    int n =6;
    int m = 7;

    for(int i=0;i<7;i++){
        for(int j=0; j<8;j++){
            tempTrees= 0;
            minTrees=9999999;
            for(int x =0; x<=i;x++){
                for(int y=0; y<=j; y++){
                    if(arr[x][y] == '#'){
                        tempTrees++;
                    }
                }
            }
            minTrees = min(minTrees, tempTrees);
            tempTrees= 0;
            for(int x =i+1; x<=n;x++){
                for(int y=0; y<=j; y++){
                    if(arr[x][y] == '#'){
                        tempTrees++;
                    }
                }
            }
            minTrees = min(minTrees, tempTrees);

            tempTrees= 0;
            for(int x =0; x<=i;x++){
                for(int y=j+1; y<=m; y++){
                    if(arr[x][y] == '#'){
                        tempTrees++;
                    }
                }
            }
            minTrees = min(minTrees, tempTrees);

            tempTrees= 0;
            for(int x =i+1; x<=n;x++){
                for(int y=j+1; y<=m; y++){
                    if(arr[x][y] == '#'){
                        tempTrees++;
                    }
                }
            }
            minTrees = min(minTrees, tempTrees);
            maxTrees = max(maxTrees, minTrees);
        }
    }

    cout<<maxTrees;
    return 0;
}
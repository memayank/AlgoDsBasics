=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(j-1>0){
                aux[i][j] += aux[i][j-1];
            }
            if(i-1>0){
                aux[i][j] += aux[i-1][j];
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           cout<<aux[i][j]<<" ";
        }
        cout<<endl;
    }
#include<bits/stdc++.h>
using namespace std;

void changeRow(vector<vector<int>>&matrix, int row){
    for(int i=0;i<matrix[0].size();i++){
        matrix[row][i]=0;
    }
}

void changeColumn(vector<vector<int>>&matrix, int column){
    for(int i=0;i<matrix.size();i++){
        matrix[i][column]=0;
    }
}

void func(vector<vector<int>>&matrix, int n,int m){
    bool row[n];
    bool column[m];
    memset(row,false,sizeof(row));
    memset(column,false,sizeof(column));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                row[i]=true;
                column[j]=true;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(row[i]){
            changeRow(matrix,i);
        }
    }
    for(int i=0;i<m;i++){
        if(column[i]){
            changeColumn(matrix,i);
        }
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>matrix(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    func(matrix,n,m);
    for(auto i:matrix){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> setMatrixZero(vector<vector<int>>& arr, int n, int m){
    vector<int>row(n,0),col(m,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(row[i]==1 || col[j]==1){
                arr[i][j]=0;
            }
        }
    }
    return arr;
}
int main(){
    int n,m;
    cout<<"N : ";
    cin>>n;
    cout<<"M : ";
    cin>>m;
    vector<vector<int>>arr(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    vector<vector<int>>ans=setMatrixZero(arr,n,m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
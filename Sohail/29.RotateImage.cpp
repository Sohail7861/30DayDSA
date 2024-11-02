#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> rotateImage(vector<vector<int>>& matrix, int n, int m){
    vector<int>row(n,0),col(m,0);
    for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    return matrix;
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
    vector<vector<int>>ans=rotateImage(arr,n,m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
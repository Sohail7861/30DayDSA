#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> spiralMatrix(vector<vector<int>>& matrix, int row, int col){
    int top=0,left=0;
    int bottom=row-1,right=col-1;
    vector<int>ans;
    while(left<=right && top<=bottom){
        for(int i=left;i<=right;i++){
            ans.push_back(matrix[top][i]);
        }
        top++;
        
        for(int i=top;i<=bottom;i++){
            ans.push_back(matrix[i][right]);
        }
        right--;
        
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"N : ";
    cin>>n;
    int m;
    cout<<"M : ";
    cin>>m;
    vector<vector<int>>matrix(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    vector<int>ans=spiralMatrix(matrix,n,m);
    for(auto val:ans){
        cout<<val<<" ";
    }
}
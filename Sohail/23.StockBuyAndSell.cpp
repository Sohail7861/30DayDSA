#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int StockBuySell(vector<int>& prices, int n){
        int ans=0;
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            mini=min(mini,prices[i]);
            ans=max(ans,prices[i]-mini);
        }
        return ans;
}

int main(){
    int n;
    cout<<"N : ";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Answer : "<<StockBuySell(arr,n);
}
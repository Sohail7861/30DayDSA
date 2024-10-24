#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& arr, int n){
    int xorr=0;
    for(int i=0;i<n;i++){
        xorr^=arr[i];
    }
    return xorr;
}

int main(){
    int n;
    cout<<" N : ";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=singleNumber(arr,n);
    cout<<"Answer : "<<ans;
}
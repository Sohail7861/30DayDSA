#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int sum(vector<int> &arr, int n, int k){
    int presum=0;
    int count=0;
    unordered_map<int,int>mapp;
    mapp[0]=1;
    for(int i=0;i<n;i++){
        presum+=arr[i];
        int removE=presum-k;
        count+=mapp[removE];
        mapp[presum]++;
    }
    return count;
}

int main(){
    int n;
    cout<<"N : ";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"K : ";
    cin>>k;
    cout<<"Answer : "<<sum(arr,n,k);
}
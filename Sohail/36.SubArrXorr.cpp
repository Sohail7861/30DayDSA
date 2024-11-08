#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int SubArrXor(vector<int>& vec,int n,int target){
    int count=0;
    int xorr=0;
    unordered_map<int,int>mapp;
    for(int i=0;i<n;i++){
        xorr^=vec[i];
        if(xorr==target){
            count++;
        }
        if(mapp.find(xorr^target)!=mapp.end()){
            count+=mapp[xorr^target];
        }
        mapp[xorr]++;
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
    int target;
    cout<<"target : ";
    cin>>target;
    cout<<"Answer : "<<SubArrXor(arr,n,target);
}
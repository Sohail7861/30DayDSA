#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool check(vector<int>& arr, int n){
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout<<"N : ";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool ans=check(arr,n);
    if(ans==1){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}
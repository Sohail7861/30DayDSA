#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int>& arr, int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>maxi){          // maxi=max(maxi,arr[i]);
            maxi=arr[i];
        }
    }
    return maxi;
}

int main(){
    int n;
    cout<<"N : ";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=largestElement(arr,n);
    cout<<"Largest Element : "<< ans;
}
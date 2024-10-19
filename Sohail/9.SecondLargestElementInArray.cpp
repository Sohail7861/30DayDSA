#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int SecondMax(vector<int>& arr, int n){
    int maxi1=INT_MIN;
    int maxi2=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>maxi1){
            maxi2=maxi1;
            maxi1=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=maxi2 && arr[i]<maxi1){
            maxi2=arr[i];
        }
    }
    if(maxi2==INT_MIN){
        return -1;
    }
    return maxi2;
}

int main(){
    int n;
    cout<<"N : ";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=SecondMax(arr,n);
    cout<<"Second Largest Element : "<<ans;
    
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& arr, int n){
    int k=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[k++]=arr[i];
        }
    }
    for(int i=k;i<n;i++){
        arr[i]=0;
    }
}

int main(){
    int n;
    cout<<"N : ";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    moveZeroes(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
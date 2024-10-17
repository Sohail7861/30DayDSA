#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&arr, int l, int mid, int r){
    vector<int>vec;
    int left=l;
    int right=mid+1;
    while(left<=mid && right<=r){
        if(arr[left]<arr[right]){
            vec.push_back(arr[left++]);
        }
        else{
            vec.push_back(arr[right++]);
        }
    }
    while(left<=mid){
        vec.push_back(arr[left++]);
    }
    while(right<=r){
        vec.push_back(arr[right++]);
    }
    for(int i=l;i<=r;i++){
        arr[i]=vec[i-l];
    }
}

void mergeSort(vector<int>& arr,int l, int r){
    if(l==r){
        return;
    }
    int mid=(l+r)/2;
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);
    merge(arr,l,mid,r);
}

int main(){
    int n;
    cout<<"N : ";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }    
}
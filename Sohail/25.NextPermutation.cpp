#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> nextPermutation(vector<int> &arr,int n){
    int bp=-1;
    for(int i=n-2;i>0;i--){
        if(arr[i]<arr[i+1]){
            bp=i;
            break;
        }
    }
    if(bp==-1){
        reverse(arr.begin(),arr.end());
        return arr;
    }
    for(int i=n-1;i>bp;i--){
        if(arr[i]>arr[bp]){
            swap(arr[i],arr[bp]);
            break;
        }
    }
    reverse(arr.begin()+bp+1,arr.end());
    return arr;
}

int main(){
    int n;
    cout<<"N : ";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans=nextPermutation(arr,n);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}
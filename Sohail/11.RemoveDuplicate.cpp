#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int removeDuplicate(vector<int>& arr, int n){
    int k=0;
    for(int i=0;i<n;i++){
        if(arr[k]!=arr[i]){
            k++;
            arr[k]=arr[i];
        }
    }
    return k+1;
}
int main(){
    int n;
    cout<<"N : ";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k=removeDuplicate(arr,n);
    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }
    
}

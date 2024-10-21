#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void rotate(vector<int>& arr, int n, int k){
    k=k%n;
    reverse(arr.begin(),arr.begin()+(arr.size()-k));
    reverse(arr.begin()+(arr.size()-k),arr.end());
    reverse(arr.begin(),arr.end());
}
int main(){
    int n;
    cout<<"N : ";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Key : ";
    cin>>key;
    rotate(arr, n, key);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
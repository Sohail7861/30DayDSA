#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int linearSearch(vector<int>&vec,int n,int key){
    for(int i=0;i<n;i++){
        if(vec[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int key;
    cout<<"Key : ";
    cin>>key;
    cout<<linearSearch(vec,n,key);
}
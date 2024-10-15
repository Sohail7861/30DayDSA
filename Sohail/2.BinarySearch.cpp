#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>&vec,int n,int key){
    int low=0;
    int high=n-1;
    int mid;
    for(int i=0;i<n;i++){
        mid=low+(high-low)/2;     //(low+high)>>2;
        if(vec[mid]==key){
            return mid;
        }
        else if(vec[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
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
    cout<<binarySearch(vec,n,key);
}
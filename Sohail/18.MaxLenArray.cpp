#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maxLength(vector<int> &arr, int n, int k){
    int i=0;
    int j=0;
    int sum=arr[0];
    int maxi=0;
    while(j<n){
        while(i<=j && sum>k){
            sum-=arr[i];
            i++;
        }
        if(sum==k){
            maxi=max(maxi,j-i+1);
        }
        j++;
        if(j<n){
            sum+=arr[j];
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
    int k;
    cout<<"K : ";
    cin>>k;
    cout<<"Answer : "<<maxLength(arr,n,k);
}
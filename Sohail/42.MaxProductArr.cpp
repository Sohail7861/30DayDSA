#include<iostream>
#include <bits/stdc++.h>
using namespace std;



int maxProduct(vector<int>& nums,int n) {
    int prod=1;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        prod*=nums[i];
        maxi=max(maxi,prod);
        if(prod==0){
            prod=1;
        }
    }
    prod=1;
    for(int i=n-1;i>=0;i--){
        prod*=nums[i];
        maxi=max(maxi,prod);
        if(prod==0){
            prod=1;
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
    cout<<"Count : "<<maxProduct(arr,n);
}
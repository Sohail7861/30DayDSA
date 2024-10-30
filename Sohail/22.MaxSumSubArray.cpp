#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maximumSum(vector<int>& nums, int n){
        int sum=0;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            maxi=max(maxi,sum);
            if(sum<0){
                sum=0;
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
    cout<<"Maximum sum : "<<maximumSum(arr,n);
}
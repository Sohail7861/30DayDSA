#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int reversePairs(vector<int> &nums, int n) {
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]>(2*nums[j])){
                count++;
            }
        }
    }
    return count;
}


int main(){
    int n;
    cout<<"N : ";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Count : "<<reversePairs(arr,n);
}
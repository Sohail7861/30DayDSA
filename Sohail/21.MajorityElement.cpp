#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums, int n){
        int count=0;
        int ele;
        for(int i=0;i<n;i++){
            if(count==0){
                count++;
                ele=nums[i];
            }
            else if(ele==nums[i]){
                count++;
            }
            else{
                count--;
            }
        }
        int x=n/2;
        count=0;
        for(int i=0;i<n;i++){
            if(ele==nums[i]){
                count++;
            }
        }
        return ele;
}

int main(){
    int n;
    cout<<"N : ";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Majority Element : "<<majorityElement(arr,n);
}
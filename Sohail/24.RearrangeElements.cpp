#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> arrange(vector<int>& nums, int n){
        int pos=0;
        int neg=1;
        vector<int>vec(n);
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                vec[pos]=nums[i];
                pos+=2;
            }
            else{
                vec[neg]=nums[i];
                neg+=2;
            }
        }
        return vec;
}

int main(){
    int n;
    cout<<"N : ";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans=arrange(arr,n);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}
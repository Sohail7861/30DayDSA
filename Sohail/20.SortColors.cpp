#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> sortColors(vector<int>& nums, int n){
        int low=0;
        int mid=0;
        int high=n-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low++],nums[mid++]);
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid],nums[high--]);
            }
        }
        return nums;
}

int main(){
    int n;
    cout<<"N : ";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>vec=sortColors(arr,n);
    for(int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }
}
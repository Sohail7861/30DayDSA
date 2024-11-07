#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> ThreeSum(vector<int>& nums, int n) {
        vector<vector<int>>vec;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int low=i+1;
            int high=n-1;
            while(low<high){
                int sum=nums[i]+nums[low]+nums[high];
                if(sum==0){
                    vector<int>temp={nums[i],nums[low],nums[high]};
                    vec.push_back(temp);
                    low++;
                    high--;

                    while(low<high && nums[low]==nums[low-1]){
                        low++;
                    }
                    while(low<high && nums[high]==nums[high+1]){
                        high--;
                    }
                }
                else if(sum<0){
                    low++;
                }
                else{
                    high--;
                }
                
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
    vector<vector<int>>ans=ThreeSum(arr,n);
    
    for(auto it:ans){
        cout<<"[";
        for(auto x:it){
            cout<<x<<",";
        }
        cout<<"]";
    }
    
    
}
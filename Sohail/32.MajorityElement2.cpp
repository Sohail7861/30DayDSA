#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> majorityElement(vector<int>& nums, int n) {
        int ele1;
        int ele2;
        int count1=0,count2=0;
        for(int i=0;i<n;i++){
            if(count1==0 && nums[i]!=ele2){
                count1=1;
                ele1=nums[i];
            }
            else if(count2==0 && nums[i]!=ele1){
                count2=1;
                ele2=nums[i];
            }
            else if(nums[i]==ele1) count1++;
            else if(nums[i]==ele2) count2++;
            else{
                count1--;
                count2--;
            }
        }
        vector<int>vec;
        int x=n/3+1;
        count1=0;
        count2=0;
        for(int i=0;i<n;i++){
            if(ele1==nums[i]) count1++;
            else if(ele2==nums[i]) count2++;
        }
        if(count1>=x) vec.push_back(ele1);
        if(count2>=x) vec.push_back(ele2);
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
    vector<int>ans=majorityElement(arr,n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
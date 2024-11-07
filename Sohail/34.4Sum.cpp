#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> FourSum(vector<int>& arr, int n, int target) {
        vector<vector<int>>vec;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            if(i>0 && arr[i]==arr[i-1]) continue;
            for(int j=i+1;j<n;j++){
                if(j>i+1 && arr[j]==arr[j-1]) continue;
                int l=j+1;
                int h=n-1;
                while(l<h){
                    long long sum=arr[i];
                    sum+=arr[j];
                    sum+=arr[l];
                    sum+=arr[h];
                    if(sum==target){
                        vector<int>temp={arr[i],arr[j],arr[l],arr[h]};
                        vec.push_back(temp);
                        l++;
                        h--;
                        while(l<h && arr[l]==arr[l-1]) l++;
                        while(l<h && arr[h]==arr[h+1]) h--;
                    }
                    else if(sum<target) l++;
                    else h--;
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
    int target;
    cout<<"target : ";
    cin>>target;
    
    vector<vector<int>>ans=FourSum(arr,n,target);
    for(auto it:ans){
        cout<<"[";
        for(auto x:it){
            cout<<x<<",";
        }
        cout<<"]";
    }
    
    
}
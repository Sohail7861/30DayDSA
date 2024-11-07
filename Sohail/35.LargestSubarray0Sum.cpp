#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int find(vector<int>& arr, int n, int target){
        unordered_map<int,int>mapp;
        int maxi=0;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum==0){
                maxi=i+1;
            }
            else{
                if(mapp.find(sum)!=mapp.end()){
                    maxi=max(maxi,i-mapp[sum]);
                }
                else{
                    mapp[sum]=i;
                }
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
    int target;
    cout<<"target : ";
    cin>>target;
    
    cout<<"Answer : "<<find(arr,n,target);
    
    
}
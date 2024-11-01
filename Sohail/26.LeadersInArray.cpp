#include<iostream>
#include<bits/stdc++.h>
using namespace std;


vector<int> findLeaders(vector<int> &ans, int n){
    vector<int>vec;
    int maxi=ans[n-1];
    vec.push_back(maxi);
    for(int i=n-2;i>=0;i--){
        if(ans[i]>=maxi){
            vec.push_back(ans[i]);
            maxi=ans[i];
        }
    }
    reverse(vec.begin(),vec.end());
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
    vector<int>ans=findLeaders(arr,n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
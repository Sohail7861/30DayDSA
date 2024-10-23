#include<iostream>
#include<bits/stdc++.h>
using namespace std;


vector<int> unionArray(vector<int>& a, vector<int>& b, int n ,int m){
    vector<int>vec;
    int i=0;
    int j=0;
    while(i<n && j<m){
        if(a[i]<=b[j]){
            if(vec.size()==0 || vec.back()!=a[i]){
                vec.push_back(a[i]);
            }
            i++;
        }
        else{
            if(vec.size()==0 || vec.back()!=b[j]){
                vec.push_back(b[j]);
            }
            j++;
        }
    }
    while(i<n){
        if(vec.size()==0 || vec.back()!=a[i]){
                vec.push_back(a[i]);
            }
            i++;
    }
    
    while(j<m){
        if(vec.size()==0 || vec.back()!=b[j]){
                vec.push_back(b[j]);
            }
            j++;
    }
    return vec;
    
}

int main(){
    int n;
    cout<<" N :";
    cin>>n;
    vector<int>arr1(n);
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int m;
    cout<<" M : ";
    cin>>m;
    vector<int>arr2(m);
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    vector<int>ans=unionArray(arr1,arr2,n,m);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
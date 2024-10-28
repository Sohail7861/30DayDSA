#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& vec,int n, int key){
    sort(vec.begin(),vec.end());
    int low=0;
    int high=n-1;
    while(low<high){
        int sum=vec[low]+vec[high];
        if(sum==key){
            return {low,high};
        }
        else if(sum<key){
            low++;
        }
        else{
            high--;
        }
    }
    return {-1,-1};
}

int main(){
    int n;
    cout<<"N : ";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Key : ";
    cin>>key;
    vector<int>vec=twoSum(arr, n, key);
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void mergeSortedArray(vector<int>& nums1,int m,vector<int>& nums2, int n ){
        int k=m+n-1;
        int i=m-1;
        int j=n-1;
        while(i>=0 && j>=0){
            if(nums1[i]>nums2[j]){
                nums1[k--]=nums1[i--];
            }
            else{
                nums1[k--]=nums2[j--];
            }
        }
        while(i>=0){
            nums1[k--]=nums1[i--];
        }
        while(j>=0){
            nums1[k--]=nums2[j--];
        }
       
}
int main(){
    int n;
    cout<<"N : ";
    cin>>n;
    int m;
    cout<<"M : ";
    cin>>m;
    vector<int>arr(n);
    vector<int>vec(m);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<m;i++){
        cin>>vec[i];
    }
    mergeSortedArray(arr,n,vec,m);
    for(int i=0;i<(m+n);i++){
        cout<<arr[i]<<" ";
    }
}
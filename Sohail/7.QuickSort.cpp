#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>&arr, int low, int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}

void quickSort(vector<int> &arr, int low, int high){
    if(low<high){
        int p=partition(arr,low,high);
        quickSort(arr,low,p-1);
        quickSort(arr,p+1,high);
    }
}

vector<int> quick(vector<int> vec){
    quickSort(vec,0,vec.size()-1);
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
    arr=quick(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}
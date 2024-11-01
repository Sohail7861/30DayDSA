#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int LcS(vector<int> &vec,int n){
    priority_queue<int>q;
    for(int i=0;i<n;i++){
        q.push(vec[i]);
    }
    int count=1;
    int maxi=1;
    while(!q.empty()){
        int x=q.top();
        q.pop();
        
        if(!q.empty() && x==q.top()+1){
            count++;
            maxi=max(maxi,count);
        }
        
        else if(!q.empty() && x==q.top()){
            continue;
        }
        
        else{
            count=1;
        }
    }
    return maxi;
    
    /*
    set<int>sett;
    for(int i=0;i<n;i++){
        sett.insert(vec[i]);
    }
    if(n==0) return 0;
    int maxi=0;
    for(auto it:sett){
        if(sett.find(it-1)==sett.end()){
            int count=1;
            int value=it;
            if(sett.find(value+1)!=sett.end()){
                value++;
                count++;
            }
            maxi=max(maxi,count);
        }
    }
    return maxi;
    */
}

int main(){
    int n;
    cout<<"N : ";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Longest Consecutive Sequence : "<<LcS(arr,n);
}
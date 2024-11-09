#include<iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> findMissingRepeatingNumbers(vector<int> a) {
    int n=a.size(); 
    int SN=(n*(n+1))/2;
    int S2N=(n*(n+1)*(2*n+1))/6;
    int S=0,S2=0;
    for(int i=0;i<n;i++) {
        S+=a[i];
        S2+=(int)a[i]*(int)a[i];
    }
    int val1=S-SN;
    int val2=S2-S2N;
    val2=val2/val1;
    int x=(val1+val2)/2;
    int y=x-val1;

    return {x, y};
}

int main(){
    int n;
    cout<<"N : ";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> ans = findMissingRepeatingNumbers(arr);
    cout<<"The repeating and missing numbers are: {"
         <<ans[0]<<", "<<ans[1]<<"}\n";
    return 0;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<vector<int>>vec;
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<n;i++){
            if(vec.size()==0 || intervals[i][0]>vec.back()[1]){
                vec.push_back(intervals[i]);
            }
            else{
                vec.back()[1]=max(vec.back()[1],intervals[i][1]);
            }
        }
        return vec;
}
int main(){
    vector<vector<int>>arr={{1, 3}, {8, 10}, {2, 6}, {15, 18}};
    vector<vector<int>>ans=mergeOverlappingIntervals(arr);
    cout << "The merged intervals are: " << "\n";
    for (auto it:ans) {
        cout<<"["<<it[0]<<", "<<it[1]<<"]";
    }
    cout << endl;
}
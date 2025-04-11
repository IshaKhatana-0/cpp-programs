#include<bits/stdc++.h>
using namespace std;
bool twoSum(vector<int>&arr){
    int target;
    cout<<"enter target value";
    cin>>target;
    int n=arr.size();
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        int req=target-arr[i];
        if(s.find(req)!= s.end()) return true;
        s.insert(arr[i]);
    }
    return false;

}

int main(){
    vector<int>arr={3,4,5,6,1,2};
    twoSum(arr);

}
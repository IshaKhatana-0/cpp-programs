#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>arr1,vector<int>arr2){
    int n=arr1.size();
    int m=arr2.size();
    int i=0;
    int j=0;
    vector<int>ans;
    while(i<n and j<m){
        if(arr1[i] <= arr2[j]){
            ans.push_back(arr1[i]);
            i++;
        }
        else{
            ans.push_back(arr2[j]);
            j++;
        }
    }
    while(i>n){
        ans.push_back(arr1[i]);
        i++;
    }
    while(j<m){
        ans.push_back(arr2[j]);
        j++;
    }
    
}
int main(){
    vector<int>arr1={1,2,4,5};
    vector<int>arr2={2,4,6,7};
    merge(arr1,arr2);
    for(auto x: ans){
        cout<<x;
    }

    return 0;
}
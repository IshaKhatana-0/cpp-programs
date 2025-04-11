//default value of key is always 0
#include<bits/stdc++.h>
using namespace std;
void countFreq(vector<int>arr){
    int n=arr.size();
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto it : mp){
        cout<<it.first << "  "<<it.second<<endl;
    }
}
int main(){
    vector<int>arr={1,2,3,4,2,1,2,3,4,4};
    countFreq(arr);
}
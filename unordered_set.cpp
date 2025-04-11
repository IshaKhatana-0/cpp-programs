//print unique elements from an array using unordered sets
//time complexity to insert element in unordered set is O(1)

#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
void fun(vector<int>&arr){
    int n=arr.size();
    unordered_set<int>s;
    // for(int i=0;i<n;i++){
    //     s.insert(arr[i]);
    // }
    for(auto it :arr){
        s.insert(it);
    }
    for(auto it : s){
        cout<<it<<endl;
    }
}
int main(){
    vector<int>arr={1,2,2,3,7,1};
    fun(arr);
}


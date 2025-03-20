#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr;
    arr.push_back(1);//to insert an element at the end
    arr.push_back(2);
    int n=arr.size();//for size of vector
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    }
//vector<int>arr(n);   to declare n size vector  (n,22) print n times 22
//vector<vector<int>>arr(n,vector<int>(m,0));
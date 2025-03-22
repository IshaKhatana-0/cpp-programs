//array can be sorted or unsorted and linearly search element one by one


#include<bits/stdc++.h>
using namespace std;
int linearsearch(vector<int>arr, int x){
    int n=arr.size();
    int ans=-1;
    for(int i=0;i<=n;i++){
        if(arr[i]==x){
            ans=i;
        
        }
        return ans;
    }
     return -1;
}
int main(){
    vector<int>arr = {4,3,2,3,5};
    cout<<linearsearch(arr,3);
    
}
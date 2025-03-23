//reverse a vector so pointer is given starting and beyond last one

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr;
    while(n){
        arr.push_back(n%10);
        n=n/10;
        
    }
    reverse(arr.begin(),arr.end()); //makes changes in original vector
    for(i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
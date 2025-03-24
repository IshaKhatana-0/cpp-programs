//print digits of a number

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
    for(int i=arr.size()-1;i>=0;i--){
        cout<<arr[i];
    }
    return 0;
}





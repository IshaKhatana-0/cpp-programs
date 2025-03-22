//sorted array is given compulsorily and we take variable low,high,mid=(l+h)/2 time complexity log(n)


#include<bits/stdc++.h>
using namespace std;
int binarysearch(vector<int>arr, int x){
    int low=0,high=arr.size()-1;
    int mid=(low+high)/2;
    while(low<=high){
        if(arr[mid]==x) return mid;
        else if(arr[mid]>x) high=mid-1;
        else low =mid+1;
    }
    return -1;
    
    }
int main(){
    vector<int>arr ={1,2,3,4,5};
    cout<<binarysearch(arr,3);
}
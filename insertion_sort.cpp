//divide in 2 parts sorted and unsorted array and b/w them key is present and sorting is done with the help of it and key changes


#include<bits/stdc++.h>
using namespace std;
void insertionsort(vector<int>&arr){
    int n=arr.size();
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 and arr[j]>key){
            arr[j+1] =arr[j];
            j--;

        }
        arr[j+1]=key;
    }
}

int main(){
    vector<int>arr = {4,5,1,3,2};
    insertionsort(arr);
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }


}
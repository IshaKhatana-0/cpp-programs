//bubble sort: largest element at its position by comparing two elements in pair
//time complexity sorted array O(n) and for unsorted array is o(n^2)

#include<bits/stdc++.h>
using namespace std;
    void bubblesort(vector<int>&arr){
        int n=arr.size();
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1-i;j++){
                if(arr[j] > arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
            }
        }
    }
int main(){
    vector<int>arr = {2,1,4,3,5};
    bubblesort(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
    return 0;

}






//using array


#include<bits/stdc++.h>
using namespace std;
    void bubblesort(int arr[], int n){
        
            
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1-i;j++){
                if(arr[j] > arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
            }
        }
    }
int main(){
    int arr[] = {2,1,4,3,5};
    int n = sizeof(arr) / sizeof(arr[0]);  

    bubblesort( arr ,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;

}
















//selection sort:find smallest element in array and place it in its right position directly without comparing repeatedly
//time complexity

#include<bits/stdc++.h>
using namespace std;
void selectionsort(vector<int>&arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[min_index]){
                min_index=j;
            }
        }
        swap(arr[i],arr[min_index]);
    }
}
int main(){
    vector<int>arr = {2,1,4,3,5};
    selectionsort(arr);
    for(int i=0; i<arr.size();i++){
        cout<<arr[i]<<endl;
    }


 return 0;   
}

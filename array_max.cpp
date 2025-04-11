//find maximum element in array

#include<bits/stdc++.h>
using namespace std;
int main(){ 
    int arr[]={1,2,3,4,5};
    int max=1;
    for (int i=0;i<5;i++){
        if(max<arr[i]){
            max=arr[i];
        }
        
    }
    cout<<"max is "<<max;
    return 0;
}

//find second last maximum element

#include<bits/stdc++.h>
using namespace std;
int secmax(vector<int>arr){
    int n=arr.size();
    int maxi=arr[0];
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
    }
    int secondLargest=INT_MIN;  //INT_MIN=-INFINITY IN CPP
    for(int i=0;i<n;i++){
        if(arr[i]!=maxi){
            secondLargest=max(secondLargest,arr[i]);
        }
    }
    return secondLargest;

}
int main(){
    vector<int>arr={3,2,4,5};
    cout<<secmax(arr);

    return 0;
}



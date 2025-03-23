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


//second method
#include<bits/stdc++.h>
using namespace std;
void linearsearch(vector<int>arr){
    int n=arr.size();
    int num;
    cout<<"enter number you want to find"<<endl;
    cin>>num;
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            cout<<"number is present at index "<<i<<endl;
            break;
        }
        else continue;
    }

}

int main(){
    vector<int>arr= {3,4,5,6,7};
    linearsearch(arr);
}








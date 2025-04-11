#include<bits/stdc++.h>
using namespace std;
int main(){
    int num=1;
    for(int i=0;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<num;
            num++;  
            cout<<"\t";    
        }
        cout<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;
int main (){
    int fact=1;
    int n;
    cout<<"enter num";
    cin>>n;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"factorial of "<<n<<" is "<<fact;

}
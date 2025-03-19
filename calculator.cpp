#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    int a,b;
    cout<<"enter the operation you want to perform";
    cin>>ch;
    cout<<endl;
    cout<<"enter value of a and b";
    cin>>a>>b;
    cout<<endl;

    switch(ch){
        case '+':
            cout<<a+b;
            break;
        case '-':
            cout<<a-b;
            break;
        default:
            cout<<"invalid ";
            break;
    }
}
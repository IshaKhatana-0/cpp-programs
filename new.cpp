#include<bits/stdc++.h>
using namespace std;
int main(){
    int b=20;  //static memory allocation
    int *ptr =new int (10);  //dynamic memory allocation
    *ptr=200; //redefine memory 
    cout<<*ptr<<endl;
    cout<<ptr<<endl;
    delete ptr;  //deletes memory
    cout<<*ptr;  //gives garbage value
}
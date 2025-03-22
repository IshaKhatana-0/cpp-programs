#include<bits/stdc++.h>
using namespace std;
void factorial(){
    int num;
    int fact=1;
    cout<<"enter the number";
    cin>>num;
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    cout<<"Factorial of "<<num<<"  is "<<fact;
}
int main(){
factorial();
    return 0;
}
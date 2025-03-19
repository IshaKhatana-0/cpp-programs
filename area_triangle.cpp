#include<bits/stdc++.h>
using namespace std;
int main (){
    int a,b,c;
    cout<<"enter the length of sides of triangle";
    cin>>a>>b>>c;
    int s=(a+b+c)/2;
    int area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<endl;
    cout<<"area of tringle is "<<area;
    
}
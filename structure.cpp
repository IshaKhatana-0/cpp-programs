#include<bits/stdc++.h>
using namespace std;
struct abc{
    int a;
    int c;
    string b;
    void sum(){
        cout<<a+c;
    }
};

int main(){
    //abc var; //declaration without defining
    abc var={10,20,"isha"};//should be defined in same sequence in which it is defined
    //var.a=10;
    //var.b="isha";
    cout<<var.a<<endl;
    cout<<var.b;
    

}
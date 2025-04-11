#include<bits/stdc++.h>
using namespace std;
class Base{
    public:
        int a=10;
        int b=20;
        void sum(){
            cout<<"base class"<<endl;
        }
        // Base(){
        //     cout<<"base class constructor"<<endl;
        // }

};
class Derived: public Base{
    public:
    void sum(){
        cout<<"derived"<<endl;
    } 
    // Derived(){
    //     cout<<"derived class constructor"<<endl;
    // }
};

int main(){
    // Base a;
    // Derived b;
    Derived obj;
    obj.sum();
}
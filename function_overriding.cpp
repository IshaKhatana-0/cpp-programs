#include<bits/stdc++.h>
using namespace std;
class Base{
    public:
        virtual void s(){
            cout<<"base"<<endl;
        }
};

class Derived:public Base{
    public:
        void s(){
            cout<<"derived"<<endl;
        }
};

int main(){
    Derived d;
    d.s();
    Base *ptr;
    ptr =&d;
    d.s();
    ptr->s();
}
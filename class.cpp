//class is by default private

#include<bits/stdc++.h>
using namespace std;
class Test{
    int c; //this is private as it is defined above public access specifier so it's by default private
    public:
        int a;//this is public
        int b;//this is public
        void sum(){
            cout<<a+b<<endl;
        }

}t3;//global object
int main(){
    Test t1; //object t1 of class Test
    cout<<sizeof(t1); 
    t1.a=3;
    t1.b=5;
    cout<<t1.a<<" "<<t1.b;
    t1.sum();
    
}
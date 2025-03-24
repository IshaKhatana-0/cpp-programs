//conditions for function overloading(any one) : name should be same of both functions
//type of argument different
//no of argument different
//order of argument different(first int double then first double int
#include<bits/stdc++.h>
using namespace std;
class Test{
    public:
        void sum(int a,int b){
            cout<<a+b<<endl;
        }
        void sum(int a, int b, int c){
            cout<<a+b+c<<endl;
        }
};
int main(){
    Test t1;
    t1.sum(3,5);
    t1.sum(3,5,6);

}
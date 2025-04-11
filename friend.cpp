#include<bits/stdc++.h>
using namespace std;
void display(One ob){
    cout<<ob.a<<endl;

}
class One{
    private:
        int a;
    public:
        friend class Two; //for declaring friend class
        friend void display(One ob); //declaring friend function
};
class Two{
    public:
        void fun(){
            One ob;
            ob.a=10;
            cout<<ob.a<<endl;
        }
};
int main(){
    One ob;
    ob.display();
    
}
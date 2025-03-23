#include<bits/stdc++.h>
using namespace std;
class Test{
    private:     //can't be accessed outside class 
        int a,b;
    public:  //can be accessed outside class
    void setValues(int aa,int bb){
        a=aa;
        b=bb;
    }
    void getValues(){
        cout<<a<<" "<<b;
    }
};
int main(){
    Test t1;
    t1.setValues(2,3);
    t1.getValues();
}
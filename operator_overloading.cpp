#include<bits/stdc++.h>
using namespace std;
class Test{
    public:
    int a;
    int b;
    Test operator +(Test ob){
        Test ans;
        ans.a=a+ ob.a;
        ans.b=b+ob.b;
        return ans;
    }
};
int main(){
    Test t1,t2;
    t1.a=10;
    t1.b=20;
    t2.a=20;
    t2.b=30;
    Test solution= t1+t2;
    cout<<solution.a;
    return 0;
}
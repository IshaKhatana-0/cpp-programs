//question: swap two no a=10 and b=20

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=10,b=20;
    int temp;

    temp=a;
    //cout<<temp;
    a=b;
    b=temp;
    cout<<"value of a and b is "<<a<< "and "<<b;
    

}


//question: swap without using temp(use addition and subtraction)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=50,b=70;
    a=b-a;
    b=b-a;
    a=b+a;
    cout<<a<<"  "<<b;
}


//using multiplication nd division


a=a*b;
b=a/b;
a=a/b;


//using xor

a=a^b
b=a^b
a=a^b
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cout<<"enter value of num";
    cin>>a;
    if(a%2 ==0){
        cout<<"num is even";
    }
    else{
        cout<<"num is odd";
    }
}


//checking without using modulo operator
//(use bitwise operator:binary represnetation of odd is always 1 and for even it is 0)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cout<<"enter the number";
    cin>>a;
    if((a & 1)==1){
        cout<<"num is odd";
    }
    else{
        cout<<"num is even";
    }
    return 0;
    }

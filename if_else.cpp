#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cout<<"enter the age";
    cin>>age;
    if(age>=0 && age<=17){
        cout<<"child";
    }
    else if(age>=17 && age<=50){
        cout<<"adult";
    }
    else if(age>=50 && age<=100){
        cout<<"old";
    }
    else if(age>=100){
        cout<<"kese jinda hai";
    }
    else{
        cout<<"nhi ho skta";
    }
}

//question: max of two numbers using function

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"enter value of a and b";
//     cin>>a>>b;
//     cout<<"max of two numbers is "<<max(a,b)<<endl;
// }

//question: max of two numbers using logic

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"enter value of a b and c";
//     cin>>a>>b;
//     cout<<endl;
//     if(a>b){
//         cout<<"a>b";
//     }
//     else if(a==b){
//         cout<<"a==b";
//     }
//     else{
//         cout<<"a<b";
//     }
// }


//question: max of three numbers

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter vale of a b and c is";
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<"a is max";
    }
    else if(b>a && b>c){
        cout<<"b is max";
    }
    else{
        cout<<"c is max";
    }
}

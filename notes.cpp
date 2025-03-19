#include<bits/stdc++.h>
using namespace std;
int main(){
    int amt;
    cout<<"enter the amount";
    cin>>amt;
    int no_of_notes=0;

    //for 100 rupee notes
    no_of_notes= no_of_notes +amt/100;
    amt =amt%100;

    //for 50 rupee notes
    no_of_notes= no_of_notes +amt/50;
    amt =amt%50;

    //for 20 rupee notes
    no_of_notes= no_of_notes +amt/20;
    amt =amt%20;

    //for 1 rupee
    no_of_notes= no_of_notes +amt;
    amt=amt+no_of_notes;
    cout<<no_of_notes;

    return 0;
    
}

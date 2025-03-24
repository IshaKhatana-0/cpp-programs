//pattern 1
#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

//pattern 2
#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=5;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";

        }
        cout<<endl;
    }
}


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=1;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=n+i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
            
        }
        cout<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<5-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}







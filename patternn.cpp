//pattern 1
// #include<bits/stdc++.h>
// using namespace std;
// int main (){
//     for(int i=1;i<=5;i++){
//        for(int j=1;j<=5;j++){
//            cout<<j;
          
//             cout<<"\t";
//     }
//          cout<<endl;
//      }
// }

//pattern 2
/*#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}*/

//pattern 3
/*#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=5;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";

        }
        cout<<endl;
    }
}*/


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n=1;
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=n+i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<"* ";
            
//         }
//         cout<<endl;
//     }
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=1;i<=5;i++){
        for(int j =1;j<=i;j++){
            if((i%2!=0)and(j%2!=0))
            cout<<'0';
            else cout<<'1';

            if((i%2==0)and(j%2!=0)) cout<<'1';
            else cout<<'0';
        }
        cout<<endl;
    }
}




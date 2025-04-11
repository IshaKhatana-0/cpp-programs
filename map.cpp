//map is present in key value pairs in which key is unique and only one value is associated to one key
//map is mostly used to count frequency(like to find freq of an element)
#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,string>mp; //two datastructure are written in syntax <key,value>
    mp.insert({1,"Isha"}); //syntax for insertion
    mp[2] = "hello"; //secomd syntax to insert where mp[key] = value
    mp[2] = "bye"; //for updating on a index
    mp.erase(2); //to delete a key value pair
    cout<<mp.size()<<endl; //for accessing size of a map
    for(auto it : mp){
        cout<<it.first << " " << it.second<<endl; //first is for key and second is for value
    }
    cout<<mp[1]; //prints value at key = 1
    if(mp.find(1)!= mp.end()){ //it means value at 1 is present as if mp.find is false then it gives beyond the last of map and mp.end also gives beyond the last if they are not equal then the value is present otherwise not


    }


}
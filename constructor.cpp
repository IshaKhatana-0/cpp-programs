//default, copy ,parametrized constructor and one more added

class Test{
    public:
    int a,b;
    Test(){
        cout<<"hello";  //called everytime object is constructed
    }
    ~Test(){   //destructor
        cout<<"bye";
    }
};

int main(){
    Test t1;
}
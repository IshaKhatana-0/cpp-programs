//if there is atleast one constructor is code then default constructor is not called
//constructor do not have  its return value

class Test{
    public:
        int a;
        int b;
        Test(){
            cout<<"default";
        }
        Test(int aa,int bb){ //default constructor
            a=aa;
            b=bb;
        }
};

int main(){
        Test t2;    
        Test t1(10,20);   //calls parametrized constructor
        cout<<t1.a;
}
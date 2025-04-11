//single
class A{
    public:
};
class B: public A{

};



//multilevel
class A{
    public:
};
class B : public A{
    public:
};
class C: public B{
    public:
};



//multiple
class A{
    public:
};
class B{
    public:
};
class C: public A,public B{
    public:
};
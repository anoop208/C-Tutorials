#include <iostream>
using namespace std;

class A{
    public:
    virtual void display(){
        cout<<"Base class invoked";
    }
};

class B: public A{
    public:
    void display(){
        cout<<"Derived class invoked";
    }
};

int main(){
    A *p;
    A a1;
    B b1;
    p = &b1;
    p->display();
    return 0;
}
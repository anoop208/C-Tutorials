#include<iostream>
using namespace std;

class Base{
    public:
    //pure virtual function
      virtual void display() = 0;
      void show(){
        cout<<"hey! Base";
      }
};

class Derived: public Base{
    public:
      void display(){
        cout<<"Derived class are called!";
      }
      void show(){
        cout<<"hey! Derived";
      }
};

int main(){
    Base *p;
    Derived d;
    p = &d;
    p->show();
    return 0;
}
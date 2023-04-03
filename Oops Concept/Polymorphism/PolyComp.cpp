#include<iostream>
using namespace std;

class A{
    private:
      int x = 5;
    public:
       void display(){
        cout<<"Base Class are called "<<x<<endl;
       }  
};

class B:public A{
    private:
      int y = 10;
    public:
       void display(){
        cout<<"Derived Class are called "<<y<<endl;
       }  
};

int main(){
    A *ptr;
    A obj1;
    B obj2;
    ptr = &obj2;
   ptr->display();

    return 0;
}
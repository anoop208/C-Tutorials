#include <iostream>
using namespace std;

class A{
    protected:
      int x;
    public:
      void set_x(int a){
        x = a;
      } 
};

class B{
    protected:
      int y;
    public:
      void set_y(int b){
        y = b;
      }  
};

class C : public A,public B{
    public:
     void display(){
        cout<<"The value of x is "<<x<<endl;
        cout<<"The value of y is "<<y<<endl;
        cout<<"addition is: "<<x+y;
     }
};

int main(){
    C c;
    c.set_x(5);
    c.set_y(10);
    c.display();
    return 0;
}
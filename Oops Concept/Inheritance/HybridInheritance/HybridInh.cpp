#include <iostream>
using namespace std;

class A{
    protected:
      int a;
    public:
      void get_a(){
        cout<<"Enter value of a: "<<endl;
        cin>>a;
      }
};

class B: public A{
    protected:
      int b;
    public:
     void get_b(){
        cout<<"Enter value of b:"<<endl;
        cin>>b;
      }  
};

class C {
    protected:
     int c;
    public:
      void get_c(){
        cout<<"Enter value of c:"<<endl;
        cin>>c;
      }
};

class D: public B, public C{
    protected:
       int d;
    public:
    void display(){
        get_a();
        get_b();
        get_c();
       cout<<"Multiplication of a,b and c is: "<<a*b*c;
    }
};

int main(){
    D d;
    d.display();
    return 0;
}
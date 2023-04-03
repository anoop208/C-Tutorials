#include<iostream>
using namespace std;

class Base{
    public:
      Base(){
        cout<<"Base Constructor are called"<<endl;
      }
    virtual ~Base(){
        cout<<"Base Destructor are called"<<endl;
      }
};

class Derived: public Base{
    public:
      Derived(){
        cout<<"Derived Constructor are called"<<endl;
      }
      ~Derived(){
        cout<<"Derived Destructor are called"<<endl;
      }

};

int main()
{
    Base *ptr;
    Derived d;
    ptr = &d;
    delete ptr;
    return 0;
}
#include <iostream>
using namespace std;

class A{
   private:
     int a = 5;
     int b = 4;
    public:
      int mul(){
        return a * b;
      } 
};

class B: public A{
   public:
     void display(){
        int result = mul();
        cout<<"Multiplication of a and b: "<<result;
     }
};

int main(){
    B b;
    b.display();
    return 0;
}
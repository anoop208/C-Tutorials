#include<iostream>
using namespace std;

template<class T>
class A{
    public:
    T num1 = 5;
    T num2 = 6;
    void display(){
        cout<<num1+num2;
    }
};

int main()
{
    A<int>d;
    d.display();
    return 0;
}
#include <iostream>
using namespace std;

class Animal{
    public:
     string color = "Brown";
};

class Dog : public Animal{
    public:
     string color = "Black";
};

int main(){
    Animal d = Dog();
    cout<<d.color;
    return 0;
}
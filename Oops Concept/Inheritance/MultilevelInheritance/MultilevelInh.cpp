#include <iostream>

using namespace std;

class Animal{
    public:
   void eat(){
    cout<<"Eating..."<<endl;
   }
};

class Dog: public Animal{
    public:
    void bark(){
        cout<<"Barking..."<<endl;
    }
};

class Puppy: public Dog{
    public:
    void cry(){
        cout<<"Crying..."<<endl;
    }
};

int main(){
    Puppy p;
    p.cry();
    p.bark();
    p.eat();
    return 0;
}

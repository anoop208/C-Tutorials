#include<iostream>
using namespace std;

class Vehicle{
    public:
      int no_of_wheels = 4;
};

class Car : public Vehicle{
    public:
      double price = 800000;
};

int main(){
    Car hyundai;
    cout<<hyundai.no_of_wheels<<" "<<hyundai.price;
    return 0;
}
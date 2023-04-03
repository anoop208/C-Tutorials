#include <iostream>
using namespace std;

class Address{
    public:
      string addressLine,city,state;
      Address(string addressLine,string city,string state){
      this->addressLine = addressLine;
      this->city = city;
      this->state = state;
      }
};

class Employee{
    private:
      Address *address;
    public:
      int id;
      string name;
      Employee(int id,string name,Address *address){
         this->id = id;
         this->name = name;
         this->address = address;
      }
      void display(){
        cout<<"Employee Id: "<<id<<endl;
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Address: "<<address->addressLine<<", "<<address->city<<", "<<
        address->state<<endl;
      }
};

int main(){
    Address a1 = Address("Beta-2","Greater Noida","UP");
    Employee e1 = Employee(1001,"Anoop",&a1);
    e1.display();
    return 0;
}
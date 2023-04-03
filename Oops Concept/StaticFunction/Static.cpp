#include <iostream>
using namespace std;

class Employee{
    public:
       string name;
       int age;
       float salary;
       static float rateOfInterest;

       Employee(string name, int age, float salary){
        this->name = name;
        this->age = age;
        this->salary = salary;
       }

       void display(){
        cout<<name<<" "<<age<<" "<<salary<<" "<<rateOfInterest<<endl;
       }

       static void CTC(){
        cout<<"total CTC is "<<50000-(50000*rateOfInterest)/100;
       }
};

float Employee::rateOfInterest = 6.5;



int main(){
    Employee e1 = Employee("Anoop",22,50000);
    e1.display();
    e1.CTC();
    return 0;
}
#include <iostream>
using namespace std;

class Student {
    public:
      string name;
      int age;
      float marks;

      Student(string name,int age,float marks){
        this->name = name;
        this->age = age;
        this->marks = marks;
      }

      void display(){
        cout<<name<<" "<<age<<" "<<marks;
      }
};

int main(){
    Student s1 = Student("Anoop",22,85.4);
    s1.display();
    return 0;
}
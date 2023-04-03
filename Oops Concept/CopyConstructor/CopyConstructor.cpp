#include <iostream>
using namespace std;

class Student {
    public:
      string name;
      int age;
      float marks;

      Student(string n,int a,float m){
        name = n;
        age = a;
        marks = m;
      }

      void display(){
        cout<<name<<" "<<age<<" "<<marks;
      }
};

int main(){
    Student s1 = Student("Anoop",22,80.2);
    Student s2 = s1; //copy object
    s2.display();
    return 0;
}

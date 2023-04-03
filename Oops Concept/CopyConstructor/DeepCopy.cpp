#include <iostream>
using namespace std;

class Student {
    public:
      string name;
      int age;
      float marks;
      int *p;

      Student(){
        p = new int;
      }

      Student(Student &d){
        name = d.name;
        age = d.age;
        marks = d.marks;
        p = new int;
        *p = *(d.p);
      }

      void setData(string n,int a,float m,int pn){
        name = n;
        age = a;
        marks = m;
        *p = pn;
      }

      void display(){
        cout<<name<<" "<<age<<" "<<marks<<" "<<*p;
      }
};

int main(){
    Student s1;
    s1.setData("Anoop",22,80.2,1000);
    Student s2 = s1; //copy object
    s2.display();
    return 0;
}
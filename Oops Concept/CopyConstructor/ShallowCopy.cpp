#include <iostream>
using namespace std;

class Student {
    public:
      string name;
      int age;
      float marks;
      int *p;

      Student(string n,int a,float m,int pn){
        name = n;
        age = a;
        marks = m;
        p =new int;
        *p = pn;
      }

      void display(){
        cout<<name<<" "<<age<<" "<<marks<<" "<<*p;
      }
};

int main(){
    Student s1 = Student("Anoop",22,80.2,1000);
    Student s2 = s1; //copy object
    s2.display();
    return 0;
}

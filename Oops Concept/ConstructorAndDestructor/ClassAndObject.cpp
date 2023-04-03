#include<iostream>

using namespace std;

class Student {   // Create Class 
    public:
      string name;     // Data Members
      int age;
      float marks;

      Student(string s,int a,float m){  //Parameterized Constructor
        name = s;
        age = a;
        marks = m;
      }

      void display(){   //member method
        cout<<" "<<name<<" "<<age<<" "<<marks;
      }
};

int main(){
    Student s1 = Student("Anoop",22,80.5); //Create Object
    s1.display();
    return 0;
}
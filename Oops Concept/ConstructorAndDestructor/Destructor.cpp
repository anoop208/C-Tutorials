#include <iostream>
using namespace std;

class Student {
    public:
      Student(){
        cout<<"Constructor are called"<<endl;
      }

      ~Student(){
        cout<<"Destructor are called"<<endl;
      }

};

int main(){
    Student s1;
    Student s2;
    return 0;
}
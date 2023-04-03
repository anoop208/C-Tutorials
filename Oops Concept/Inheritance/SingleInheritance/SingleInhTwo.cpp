#include <iostream>
using namespace std;

class Teacher{
    public:
    void teach(){
       cout<<"teaching...";
    }

};

class Student : public Teacher{
    public:
    void study(){
        cout<<"stydying...";
    }
};

int main(){
    Student s;
    s.teach();
    s.study();
    return 0;
}
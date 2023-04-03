#include<iostream>
using namespace std;

template<class T1, class T2>
class A{
    public:
        T1 x ;
        T2 y ;

        A(T1 i, T2 j){
            x = i;
            y = j;
        }

        void display(){
            cout<<x<<" "<<y;
        }
};

int main()
{
    A<int,float>ob{5,2.5};
    ob.display();
    return 0;
}
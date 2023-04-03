#include<iostream>
using namespace std;

class Function_Object{
    public:
       int operator()(int a,int b){
        return a+b;
       }
};

int main()
{
    Function_Object f;
    cout<<f(5,6);
    return 0;
}
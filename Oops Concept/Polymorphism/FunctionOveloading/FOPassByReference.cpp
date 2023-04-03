#include<iostream>
using namespace std;

void fun(int x){
    cout<<"value of x is "<<x;
}

//function overloading due to pass by reference

void fun(int &y){
    cout<<"value of y is "<<y;
}

int main(){
    int a = 10;
    fun(a);
    return 0;
}
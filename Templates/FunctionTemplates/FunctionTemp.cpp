#include<iostream>
using namespace std;

template<class T>T add(T &a, T &b){
   T result = a + b;
   return result;
}

int main(){
    int a=5,b=10;
    float c=4.5,d=2.5;
    cout<<add(a,b)<<endl;
    cout<<add(c,d)<<endl;
    return 0;
}
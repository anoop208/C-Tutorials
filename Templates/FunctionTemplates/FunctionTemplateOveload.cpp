#include<iostream>
using namespace std;

template<class X> void func(X i){
    cout<<i<<endl;
}

template<class Y, class Z>void func(Y j, Z k){
    cout<<j<<" "<<k;
}

int main(){
    func(10);
    func(2.5,3.5);
    return 0;
}
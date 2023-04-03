#include<iostream>
using namespace std;

template<class X, class Y, class Z>void func(X i, Y j, Z k){
    cout<<i<<endl;
    cout<<j<<endl;
    cout<<k<<endl;
}

int main(){
    func("Anoop",22,80.5);
    return 0;
}
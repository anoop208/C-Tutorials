#include <iostream>
using namespace std;

void func(int a){
    cout<<a;
}

//function overloading due to default args

void func(int x,int y=0){
    cout<<x;
}

int main(){
    func(10);
    return 0;
}
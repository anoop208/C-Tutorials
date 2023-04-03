#include <iostream>
using namespace std;

void fun(int i){
    cout<<"value of i is "<<i<<endl;
}

//function overloading due to type conversion
void fun(float j){
    cout<<"value of j is "<<j<<endl;
}

int main(){
    fun(10);
    fun(2.5);  
    return 0;
}
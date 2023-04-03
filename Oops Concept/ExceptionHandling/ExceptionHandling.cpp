#include<iostream>
using namespace std;

float divison(int i, int j){
    if(j == 0){
        throw "Attempt to divide by 0";
    }
    return i/j;
}

int main(){
    int a = 20;
    int b = 0;
    float k = 0;
    try{
        k = divison(a, b);
        cout<<k<<endl;
    }catch(const char* e){
        cout<<e<<endl;
    }
    return 0;
}
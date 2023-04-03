#include <iostream>
using namespace std;

struct Rectangle{
    string name;
    int length;
    int width;
};

int main(){
    Rectangle r;
    r.name = "Rectangle";
    r.length = 10;
    r.width = 20;
    cout<<r.name<<" = "<<(r.length*r.width);
    return 0;
}
#include <iostream>
using namespace std;

class Box{
    private:
      int length;
      int width;
    public:
      Box(int l, int b){
        this->length = l;
        this->width = b;
      }
      friend int CalculateArea(Box);  
};

int CalculateArea(Box a){
    return a.length * a.width;
}

int main(){
    Box b = Box(10,15);
    cout<<"Area of Box: "<<CalculateArea(b);
    return 0;
}
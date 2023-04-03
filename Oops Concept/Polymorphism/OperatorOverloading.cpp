#include<iostream>
using namespace std;

class Addition{
    private:
      int a,b;
    public:
      Addition(){}
      Addition(int x,int y){
        a=x;
        b=y;
      }
      Addition operator +(Addition c){
        Addition temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
      }
      void display(){
        cout<<a<<" "<<b;
      }
};

int main(){
    Addition a1{2,5},a2{3,6},res;
    res = a1+a2;
    res.display();
    return 0;
}
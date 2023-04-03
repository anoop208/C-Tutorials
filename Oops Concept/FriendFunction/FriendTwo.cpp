#include <iostream>
using namespace std;

class B;

class A{
    private:
      int x;
    public:
       void setdata(int m){
        x = m;
       }
       friend int min(A,B) ; 
};

class B{
    private:
      int y;
    public:
      void setdata(int n){
        y = n;
       }
       friend int min(A,B) ; 
};

int min(A a,B b){
  if(a.x <= b.y){
    return a.x;
  }else{
    return b.y;
  }
}

int main(){
    A a;
    B b;
    a.setdata(10);
    b.setdata(20);
    cout<<min(a,b);
    return 0;
}
#include<iostream>
using namespace std;

template<class T, int size>
class A{
    public:
      T arr[size];

      void insert(){
        int i = 1;
        for(int j=0; j<size; j++){
            arr[j] = i;
            i+=2;
        }
      }

      void display(){
        for(int k = 0; k<size; k++){
            cout<<arr[k]<<" ";
        }
      }
};

int main()
{
    A <int, 10>obj;
    obj.insert();
    obj.display();
    return 0;
}
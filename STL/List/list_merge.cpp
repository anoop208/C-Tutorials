#include<iostream>
#include<list>
using namespace std;

bool comparison(int first, int second){
   return first<second;    
}

int main()
{
    list<int>li1{1,2,4,6};
    list<int>li2{3,5,7,8,9};
    li1.merge(li2,comparison);
    list<int>::iterator itr;
    for(itr = li1.begin();itr!=li1.end();++itr){
        cout<<*itr<<" ";
    }
    return 0;
}
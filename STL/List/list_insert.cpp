#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int>l1{1,3,5,7};
    list<int>::iterator itr = l1.begin();
    l1.insert(itr,2,6);
    for(itr=l1.begin();itr!=l1.end();itr++){
        cout<<*itr<<" ";
    }
    return 0;
}
#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int>li{3,5,1,4};
    list<int>li1{8,2,6,9};
    list<int>::iterator itr = li.begin();
    list<int>::iterator itr1 = li1.begin();
    li.splice(itr,li1,itr1);
    for(itr=li.begin();itr!=li.end();++itr){
        cout<<*itr<<" ";
    }
    return 0;
}
#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int>li={9,4,5,2,3,8,7,1};
    li.sort();
    list<int>::iterator itr = li.begin();
    for(itr;itr!=li.end();++itr){
        cout<<*itr<<" ";
    }
    return 0;
}
#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int>d={1,2,3,4,5};
    deque<int>d1;
    deque<int>::iterator itr;
    d1.assign(d.begin(),d.end());
    for(itr=d1.begin();itr!=d1.end();++itr){
        cout<<*itr<<" ";
    }

    deque<int>d3;
    d3.assign(4,2);
    for(deque<int>::iterator itr = d3.begin();itr!=d3.end();++itr){
        cout<<*itr<<" ";
    }

    return 0;
}
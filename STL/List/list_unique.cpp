#include<iostream>
#include<list>
using namespace std;

bool pred(int x, int y){
    return (int(x)==int(y));
}

int main()
{
    list<int>li{1,2,3,4,2,2,3};
    li.unique(pred);
    for(list<int>::iterator itr=li.begin();itr!=li.end();++itr){
        cout<<*itr<<" ";
    }
    return 0;
}
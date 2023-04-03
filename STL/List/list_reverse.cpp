#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<string>li{"My", "Name", "is", "Pandit"};
    cout<<"After Reverse the String:"<<endl;
    li.reverse();
    list<string>::iterator itr;
    for(itr=li.begin();itr!=li.end();++itr){
        cout<<*itr<<" ";
    }
    return 0;
}
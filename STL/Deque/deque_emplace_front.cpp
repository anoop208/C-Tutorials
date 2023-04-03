#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<string>d1 = {"Hi!","I","am","Anoop","Pandey"};
    d1.emplace_front("Hey");
    deque<string>::reverse_iterator ritr;
    for(ritr = d1.rbegin();ritr!=d1.rend();++ritr){
       cout<<*ritr<<" ";
    }
    return 0;
}
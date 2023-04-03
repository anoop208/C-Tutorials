#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int>s; //default constructor
    s.insert(1);
    s.insert(2);
    cout<<"Sizr of set s is: "<<s.size();
    return 0;
}
#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int>s1{2,4,5};
    set<int>s2(s1);
    cout<<"Size of new set container s2 is: "<<s2.size();
    return 0;
}
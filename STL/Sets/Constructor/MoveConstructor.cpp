#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int>s = {1,3,2,7,5,4};
    set<int>s1(move(s));
    cout<<"Size of new container s1 is: "<<s1.size();
    return 0;
}
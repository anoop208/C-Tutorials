#include<iostream>
#include<set>
using namespace std;
int main()
{
    int num[] = {2,3,5,23,9};
    set<int>s(num,num+5);
    cout<<"Size of set container s is: "<<s.size();
    return 0;
}
#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int>s{10,20,30,40,50};
    pair<set<int>::const_iterator,set<int>::const_iterator>citr;
    citr = s.equal_range(30);
    cout<<"Lower bound : "<<*(citr.first)<<"\n";
    cout<<"Upper bound : "<<*(citr.second);
    return 0;
}
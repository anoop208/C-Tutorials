#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int>m{4,1,7,5,3,2};
    auto it = m.lower_bound(7.2);
    cout<<*it;
    return 0;
}
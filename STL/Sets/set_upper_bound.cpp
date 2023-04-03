#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int>mp;
    for(auto i=1;i<=5;++i){
        mp.insert(2*i);
    }
   auto it = mp.upper_bound(6);
   cout<<*it;
    return 0;
}
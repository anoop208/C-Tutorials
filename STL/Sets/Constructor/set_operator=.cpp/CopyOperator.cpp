#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int>s1={10,20,30};
    set<int>s2 = s1;
    for(auto it = s2.begin();it!=s2.end();++it){
        cout<<*it<<" ";
    }
    return 0;
}
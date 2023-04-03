#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int>s1{10,20,30,40};
    s1.emplace_hint(s1.begin(),5);
    s1.emplace_hint(s1.end(),50);
    for(auto i = s1.begin();i!=s1.end();i++){
        cout<<*i<<" ";
    }
    return 0;
}
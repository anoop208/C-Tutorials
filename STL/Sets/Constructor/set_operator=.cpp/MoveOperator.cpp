#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<string>s1 = {"Anoop","is","defeated"};
    set<string>s2 = move(s1);
    for(auto it = s2.begin();it!=s2.end();++it){
        cout<<*it<<" ";
    }
    return 0;
}
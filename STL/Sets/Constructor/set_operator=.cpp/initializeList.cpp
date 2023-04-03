#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int>s1 = {5,1,3,7,6};
    set<int>s2;
    s2 = s1;
    s1 = set<int>{};
    cout<<s1.size()<<endl;
    for(auto it=s2.begin();it!=s2.end();++it){
        cout<<*it<<" ";
    }
    return 0;
}
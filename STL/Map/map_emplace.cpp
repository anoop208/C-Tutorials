#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string>m;
    m.emplace(101,"Anoop");
    m.emplace(102,"Ajit");
    m.emplace(103,"Vivek");
    m.emplace_hint(m.end(),104,"Sashank");
    for(auto it = m.begin();it!=m.end();++it){
        cout<<it->first<<": "<<it->second<<endl;
    }
    return 0;
}
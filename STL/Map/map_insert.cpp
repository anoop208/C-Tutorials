#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<char,int>mymap;
    mymap = {
           {'a',1},{'b',2},{'c',3}
    };
    mymap.insert(mymap.begin(),pair<char,int>('z',0));
    for(auto it = mymap.begin();it!=mymap.end();++it){
        cout<<it->first<<": "<<it->second<<endl;
    }
    return 0;
}
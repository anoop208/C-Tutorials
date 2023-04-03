#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<char, int>mymap;
    mymap['a'] = 101;
    mymap['b'] = 102;
    mymap.clear();
    for(auto itr = mymap.begin(); itr!=mymap.end(); ++itr){
        cout<<itr->first<<" "<<itr->second;
    }
    return 0;
}
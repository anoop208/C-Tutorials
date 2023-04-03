#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string>mymap;
    mymap[101] = "Html";
    mymap[102] = "Css";
    mymap[103] = "JavaScript";

    auto it = mymap.find(102);
    cout<<it->first<<": "<<it->second;
    return 0;
}
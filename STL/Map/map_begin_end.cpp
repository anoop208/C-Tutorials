#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string>myMap;
    myMap[101] = "C";
    myMap[102] = "C++";
    myMap[103] = "Java";
    myMap[104] = "Python";

    for(auto& i:myMap){
        cout<<i.first<<" "<<i.second<<endl;
    }

    map<int,string>::iterator itr;
    for(itr = myMap.begin(); itr!=myMap.end(); ++itr){
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    return 0;
}
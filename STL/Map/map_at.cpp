#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string,int>myMap;
    myMap = {
        {"A",10},
        {"B",20},
        {"C",30}
    };
    cout<<myMap.at("A")<<" "<<myMap.at("B");
    return 0;
}
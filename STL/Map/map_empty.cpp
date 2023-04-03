#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,int>myMap;
    cout<<"before empty: "<<myMap.empty()<<endl;
    myMap[101] = 10;
    myMap[102] = 20;
    cout<<"After empty: "<<myMap.empty()<<endl;
    return 0;
}
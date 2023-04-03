#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string,int>myMap;
    myMap["a"] = 100;
    myMap["b"] = 200;
    myMap["c"] = 300;

    for(auto citr=myMap.crbegin();citr!=myMap.crend();++citr){
        cout<<citr->first<<" ==> "<<citr->second<<endl;
    }
    return 0;
}
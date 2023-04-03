#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string,int>myMap = {
        {"Anoop",22},
        {"Ajit",23},
        {"Vivek",24}
    };

    for(auto it=myMap.cbegin();it!=myMap.cend();++it){
        cout<<it->first<<" "<<it->second<<endl;
    }

    return 0;
}
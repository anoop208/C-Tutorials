#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string>myMap1 = {
        {101,"Anoop"},
        {102,"Ajit"},
        {103,"Vivek"}
    };
    map<int,string>myMap2 = {
        {1001,"Aman"},
        {1002,"Saurabh"}
    };
    myMap1.swap(myMap2);
    for(auto it = myMap1.begin(); it!=myMap1.end(); ++it){
        cout<<it->first<<": "<<it->second<<endl;
    }
    return 0;
}
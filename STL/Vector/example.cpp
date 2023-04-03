#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<string>v1;//initialize
    v1.push_back("Anoop");
    v1.push_back("Pandey");
    vector<string>::iterator itr;
    for(itr = v1.begin(); itr!=v1.end(); ++itr){
      cout<<*itr<<" ";
    }
    return 0;
}
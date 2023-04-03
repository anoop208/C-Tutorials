#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<string>s1 = {"My","name","is","Anoop","Pandey"};
    set<string>::const_iterator itr;
    itr = s1.begin();
    // while (itr!=s1.end())
    // {
    //    cout<<*itr<<"\n";
    //    ++itr;
    // }
    
    return 0;
}
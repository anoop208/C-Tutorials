#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string>m;
    m[101] = "Anoop";
    m[102] = "Ajit";
    m[103] = "Vivek";
    map<int,string>::iterator itr;
    for(itr = m.begin(); itr!=m.end(); ++itr){
        cout<<(*itr).first<<" "<<(*itr).second<<endl;
    }
    return 0;
}
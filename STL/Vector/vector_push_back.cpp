#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<char>v;
    v.push_back('a');
    v.push_back('b');
    v.push_back('c');
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
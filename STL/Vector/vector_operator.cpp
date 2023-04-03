#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<char>vec1{'a','b','c'};
    vector<char>vec2;
    vec2.operator=(vec1);
    for(int i=0; i<vec2.size(); i++){
        cout<<vec2[i]<<" ";
    }
    return 0;
}
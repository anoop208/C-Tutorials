#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<string>vec;
    vec.assign(4,"C++");
    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}
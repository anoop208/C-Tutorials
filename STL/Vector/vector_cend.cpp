#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec{1,2,3,4,5};
    vector<int>::const_iterator citr;
    for(citr=vec.cbegin();citr!=vec.cend();++citr){
        cout<<*citr<<" ";
    }
    return 0;
}
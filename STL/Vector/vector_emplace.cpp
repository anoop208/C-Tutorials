#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec{10,20,30,40};
    vector<int>::iterator itr;
    itr = vec.emplace(vec.begin()+3,35);
    vec.emplace(itr,25);
    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}
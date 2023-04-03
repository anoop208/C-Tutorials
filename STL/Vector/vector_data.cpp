#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec{10,20,30,40,50};
    int*k = vec.data();
    for(int i=0; i<vec.size(); i++){
        cout<<*k++<<" ";
    }
    return 0;
}
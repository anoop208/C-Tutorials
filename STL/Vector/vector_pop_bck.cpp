#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<string>v={"My","name","is","Anoop","Pandey"};
    v.pop_back();
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
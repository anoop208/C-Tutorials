#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<string>vec{"Anoop","Ajit","Vivek"};
    vector<string>::reverse_iterator ritr;
    for(ritr = vec.rbegin(); ritr != vec.rend(); ++ritr){
        cout<<*ritr<<" ";
    }
    return 0;
}
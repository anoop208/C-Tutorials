#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec{1,2,34,45};
    if(vec.empty()){
        cout<<"Vector is Empty";
    }else{
        cout<<"Vector is not empty";
    }
    return 0;
}
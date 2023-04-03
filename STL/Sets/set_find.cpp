#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int>s1 = {1,2,3,4,5};
    auto it = s1.find(4);
    if(it!=s1.end()){
        cout<<"value is "<<*it;
    }else{
    cout<<"Not found";
    }
    return 0;
}
#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int>s1{10,20,30};
    set<int>s2{10,30,20};
    if(s1==s2){
        cout<<"both equal";
    }else{
        cout<<"Not equal";
    }
    return 0;
}
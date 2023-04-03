#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string>s;
    s.push("I");
    s.push("am");
    s.push("Anoop");
    s.push("Pandey");
    cout<<s.size()<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}
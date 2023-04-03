#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string>s;
    s.emplace("Pandey");
    s.emplace("Anoop");
    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    
    return 0;
}
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int>q;
    queue<int>q1;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<"Queue's front is: "<<q.front()<<endl;
    cout<<"Queue's back is: "<<q.back()<<endl;
    q.emplace(60);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    q1.swap(q);
    cout<<q1.front()<<" "<<q1.back();
    return 0;
}
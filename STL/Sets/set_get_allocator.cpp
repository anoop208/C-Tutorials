#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int>s;
    int *p;
    unsigned int i;

    p=s.get_allocator().allocate(5);

    for(i=0;i<5;i++){
        p[i] = (i+1)*10;
    }

    for(i=0;i<5;i++){
        cout<<p[i]<<" ";
    }

    s.get_allocator().deallocate(p,5);

    return 0;
}
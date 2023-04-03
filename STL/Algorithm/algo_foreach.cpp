#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void display(int i){
  cout<<i*2<<" ";
}

int main()
{
    vector<int>vec{1,2,3,4,5};
    for_each(vec.begin(),vec.end(),display);
    return 0;
}
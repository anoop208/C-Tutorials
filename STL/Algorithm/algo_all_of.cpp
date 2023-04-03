#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>vec{12,3,6,15,9};
    if(all_of(vec.begin(),vec.end(),[](int i){
        return i%3==0;
    })){
        cout<<"numbers divisible by 3.";
    }else{
        cout<<"numbers not divisble by 3.";
    }
    return 0;
}
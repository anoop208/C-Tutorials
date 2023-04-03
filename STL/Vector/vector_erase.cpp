#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<string>vec{"Anoop","Pandey","Optimus"};
    vec.erase(vec.begin(),vec.begin()+2);
    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}
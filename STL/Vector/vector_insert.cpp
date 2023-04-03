#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<string>vec{"My","name","is","Anoop"};
    string str = "Pandey";
    vec.insert(vec.end(),str);
    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }

    cout<<endl;
    vector<string>vec2{"c++","Tutorials"};
    vec2.insert(vec2.begin(),2,"C");
    for(int i=0; i<vec2.size(); i++){
        cout<<vec2[i]<<" ";
    }
 
    cout<<endl;

    vector<string>vec3{"He","Boy"};
    vector<string>vec4{"is","a","good"};
    vec3.insert(vec3.begin()+1,vec4.begin(),vec4.begin()+3);
    for(int i=0; i<vec3.size(); i++){
        cout<<vec3[i]<<" ";
    }

    return 0;
}
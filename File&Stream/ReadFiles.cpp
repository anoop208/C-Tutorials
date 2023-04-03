#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string s;
    ifstream filestream("data.txt");
    if(filestream.is_open()){
        while(getline(filestream, s)){
            cout<<s<<endl;
        }
        filestream.close();
    }else{
        cout<<"file opening is fail";
    }
    return 0;
}
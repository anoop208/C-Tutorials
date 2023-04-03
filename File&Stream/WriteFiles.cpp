#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream filestream("data.txt");
    if(filestream.is_open()){
       filestream<<"My name is Anoop Pandey"<<endl;
       filestream<<"I am 22";
       filestream.close();
    }else{
        cout<<"file opening fail";
    }
    return 0;
}
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char ch[50];
    ofstream fs;
    fs.open("data.txt");
    cout<<"Please Enter Details:"<<endl;
    cout<<"Enter your name: ";
    cin.getline(ch, 50);
    fs<<ch<<endl;
    cout<<"Enter your age: ";
    cin.ignore();
    fs<<ch<<endl;
    fs.close();
    ifstream is;
    string line;
    is.open("data.txt");
    cout<<"Reading fro Text File:"<<endl;
    while(getline(is,line)){
       cout<<line<<endl;
    }
    is.close();
    return 0;
}
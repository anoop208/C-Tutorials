#include <iostream>
using namespace std;

enum Week{Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};

int main(){
    Week day;
    day = Friday;
    cout<<day+1;
    return 0;
}
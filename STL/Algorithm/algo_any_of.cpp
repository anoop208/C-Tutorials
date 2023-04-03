#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main()
{
    int arr[6] = {2,3,6,5,1,7};
    if(any_of(arr,arr+3,[](int i){return i%2==0;})){
        cout<<"Some array numbers in range are even.";
    }
    return 0;
}
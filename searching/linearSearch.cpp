#include<iostream>

using namespace std;

void LinearSearch(int A[10],int m,int b){
    for(int i=0;i<m;i++){
        if(A[i]==b){
            cout<<"element is at "<<i<<" index";
        }
    }
    cout<<"not found";
}


int main(){
    int arr[10],n,a;
    cout<<"Enter size of Array: ";
    cin>>n;
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the search element: ";
    cin>>a;
    LinearSearch(arr,n,a);
    return 0;
}
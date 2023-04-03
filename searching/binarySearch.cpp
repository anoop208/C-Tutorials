#include <iostream>

using namespace std;

void BinarySearch(int A[10],int s,int e,int a){
    int i=0;
    if(s==e){
        if(A[i]==a){
            cout<<"element is at "<<i;
        }else{
            cout<<"Not Found";
        }
    }else{
    int m  = (s + e)/2;
    if(A[m]==a){
      cout<<"element found at "<<m;
    }
    else {
        if(A[m]>a){
        return BinarySearch(A,s,m-1,a);
    }
    else {
        return BinarySearch(A,m+1,e,a);
    }
    }
    }
}

int main(){
    int arr[10],size,ele;
    cout<<"enter size of array: ";
    cin>>size;
    cout<<"enter the elements of array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"enter the search element: ";
    cin>>ele;
    int start = 0,end = size-1;
    BinarySearch(arr,start,end,ele);
    return 0;
}
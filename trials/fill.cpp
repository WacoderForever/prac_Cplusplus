#include <iostream>

using namespace std;

template<class Ta,class Tv>

void fill(Ta& arr,Tv value){
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        arr[i]=value;
    }
}

template<class Ta>
void printarray(Ta& arr){
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        cout<<arr[i];
        if((i+1)!=size) cout<<", ";
    }
    cout<<"\n";
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    cout<<"Initial array:\n";
    printarray(arr);
    fill(arr,-99);
    cout<<"Final array:\n";
    printarray(arr);
}
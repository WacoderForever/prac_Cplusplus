#include <iostream>

template<class Ta,class Tb>
int occur(const Ta& arr,const Tb& item){
    int count=0;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        if(arr[i]== item) count++ ;
    }
    return count;
}

using namespace std;

int main(){
    int arr[]={1,2,3,34,4,3,23,22,12,3,4,4,4,4};
    cout<<"(4) occurs "<<occur(arr,4)<<" times\n";
}
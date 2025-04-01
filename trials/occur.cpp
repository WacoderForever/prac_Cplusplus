#include <iostream>
#include <vector>

using namespace std;

template<class Ta,class Tb>
int occur(const vector<Ta>& arr,const Tb& value){
    int count=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==value) count++;
    }
    return count;
}

int main(){
    vector<int> a ={1,2,3,4,4,4,45,5,4,78};
    cout<<"(4) appears "<<occur<int,int>(a,4)<<" times.\n";
    return 0;
}
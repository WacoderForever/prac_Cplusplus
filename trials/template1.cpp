#include <iostream>

template <class T>
T add(T a,T b, T c){
    return a+b*c;
}
using namespace std;

int main(){
    cout<<"The function returns:"<<add<double>(3.5,4,10.5)<<endl;
    return 0;
}
#include <iostream>

template<class T>
T abc(T a,T b,T c){
    return a*b+c;
}
int main(){
    cin>>abc(3,4.5,78);
}
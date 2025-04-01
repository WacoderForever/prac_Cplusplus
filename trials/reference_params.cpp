#include <iostream>

template<class T>
T abc(T& a,T& b,T& c){
    return a+b*c;
}


using namespace std;
int main(){
    double a=3.5;
    double b=4;
    double c=10.5;
    cout<<"The answer is: "<<abc<double>(a,b,c)<<endl;
    return 0;
}
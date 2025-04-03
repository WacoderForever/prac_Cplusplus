#include <iostream>
#include <vector>

using namespace std;

int abc(int a,int b,int c){
    if((a<=0)||(b<=0)||(c<=0)) throw "All parameters should be greater than 0"; //exception of type char*
    return a+b*c;
}

int main(){
    try{
        cout<<abc(2,0,3)<<endl;
    }
    catch(char* e){
        cout<<"The parameters were 2,0 and 3"<<endl;
        cout<<"An exception was encountered\n";
        cout<<e<<endl;
        return 1;
    }
    return 0;
}
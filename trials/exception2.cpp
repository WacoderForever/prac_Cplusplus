#include <iostream>
#include <vector>

using namespace std;

int abc(int a,int b,int c){
    if((a<=0)||(b<=0)||(c<=0)) throw "All parameters should be greater than 0"; //exception of type char*
    if((a<0)&&(b<0)&&(c<0)) throw 1;
    else if((a==0)&&(b==0)&&(c==0)) throw 2;
    else return a+b*c;
}

int main(){
    try{
        cout<<abc(2,0,5)<<endl;
    }
    catch(...){
        cout<<"Error encountered."<<endl;
    }
    return 0;
}
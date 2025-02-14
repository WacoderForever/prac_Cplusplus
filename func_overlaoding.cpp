#include "allheaders.h"

int triple(int number){

    return (number*3);
}

string triple(string text){

    return (text+text+text);
}

int main(){

    cout<<"Trippling 5 you have: "<<triple(5)<<endl;
    cout<<"Trippling 'game' you have: "<<triple("game")<<endl;

    return 0;
}
#include "allheaders.h"

int main(){

    int score=100;
    int& rscore=score;

    cout<<"score: "<<score<<endl;
    cout<<"rscore: "<<rscore<<endl;

    cout<<"Adding 150 to score:"<<endl;

    score+=150;

    cout<<"score: "<<score<<endl;
    cout<<"rscore: "<<rscore<<endl;

    cout<<"Adding 150 to rscore:"<<endl;

    rscore+=150;

    cout<<"score: "<<score<<endl;
    cout<<"rscore: "<<rscore<<endl;
    
    return 0;
}
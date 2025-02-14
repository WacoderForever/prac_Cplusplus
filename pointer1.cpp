#include "allheaders.h"

int main(){

    int *pAPointer=0;
    int *pScore=0;
    int score=1000;
    pScore=&score;

    cout<<"Assigning address of score to pScore"<<endl;
    cout<<"&score is : "<<&score<<endl;
    cout<<"pScore is : "<<pScore<<endl;
    cout<<"Score is : "<<score<<endl;
    cout<<"*pScore : "<<*pScore<<endl;
    cout<<"Adding 500 to score\n";
    score+=500;
    cout<<"Score is "<<score<<endl;
    cout<<"*pSore is "<<*pScore<<endl;
    cout<<"Assigning &newscore to pScore"<<endl;

    int newscore=5000;
    pScore=&newscore;

    cout<<"&newscore is : "<<&newscore<<endl;
    cout<<"pscore is : "<<pScore<<endl;
    cout<<"newscore is : "<<newscore<<endl;
    cout<<"pScore is : "<<pScore<<endl;
    cout<<"Assigning &str to pScore\n";

    string str="Caliha";
    string *pstr=&str;

    cout<<"&str is : "<<&str<<endl;
    cout<<"pstr is : "<<pstr<<endl;
    cout<<"str is : "<<str<<endl;
    cout<<"*pstr is : "<<*pstr<<endl;
    cout<<"(*pstr).size() is "<< (*pstr).size()<<endl;
    cout<<"pScore->size() is "<<pstr->size()<<endl;


    return 0;
}
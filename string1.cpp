#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    string word1="Game";
    string word2("Over");
    string word3(3,'!');

    string phrase=word1+" "+word2+word3;
    cout<<"The phrase is: "<<phrase<<endl;
    cout<<"The phrase has "<<phrase.size()<<" characters in it."<<endl;
    cout<<"The character at positon 0 is: "<<phrase[0]<<endl;
    cout<<"Changing the character at position 0"<<endl;
    phrase[0]='L';
    cout<<"The phrase now is: "<<phrase<<endl;

    for(int i=0;i<phrase.size();i++){
        cout<<"Character at position 0 is: "<<phrase[i]<<endl;
    }
    cout<<"The phrase 'Over' begins at position "<<phrase.find("Over")<<endl;

    if(phrase.find("eggplant")==string::npos){

        cout<<"Phrase 'eggplant' missing"<<endl;
    }

    //delete 5 characters from the 4th position
    phrase.erase(4,5);
    cout<<"The phrase is now: "<<phrase<<endl;

    //delete all characters in the string starting from the fourth position
    phrase.erase(4);
    cout<<"The phrase is now: "<<phrase<<endl;

    //clear the whole phrase
    phrase.erase();
    cout<<"The phrase is now: "<<phrase<<endl;

    if(phrase.empty()){
        cout<<"The phrase is empty"<<endl;
    }

    return 0;
}
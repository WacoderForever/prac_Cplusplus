#include "allheaders.h"

int main(){

    vector <int> scores;
    vector <int>::const_iterator iter;

    //enter scores
    scores.push_back(1300);
    scores.push_back(1500);
    scores.push_back(1800);

    cout<<"Creaing a list of scores\n";

    for(iter=scores.begin();iter != scores.end();++iter){

        cout<<*iter<<endl;

    }

    cout<<"Finding a score:\n";

    int score;

    cout<<"Enter a score to find:";

    cin>>score;

    iter=find(scores.begin(),scores.end(),score);

    if(iter != scores.end()){

        cout<<"Score is found.\n";
    }

    else{

        cout<<"Score not found\n";
    }

    srand(static_cast<unsigned int>(time(0)));
    random_shuffle(scores.begin(),scores.end());

    cout<<"Randomising high scores:\n";

    for(iter=scores.begin();iter != scores.end();++iter){

        cout<<*iter<<endl;
    }

    cout<<"Sorting the scores:\n";

    sort(scores.begin(),scores.end());

    for(iter=scores.begin() ; iter != scores.end() ; iter++){

        cout<<*iter<<endl;

    }

    return 0;
}
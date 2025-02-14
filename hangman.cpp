#include "allheaders.h"

int main(){

    //initialise variables

    const int MAX_WRONG=8;
    vector <string> words;

    words.push_back("GUESS");
    words.push_back("HANGMAN");
    words.push_back("DIFFICULT");

    srand(static_cast<unsigned int>(time(0)));
    random_shuffle(words.begin(),words.end());

    string THE_WORD=words[0];
    string sofar(THE_WORD.size(),'-');
    int wrong=0;
    string used="";

    cout<<"Welcome to Hangman\n";

    //main loop

    while(wrong < MAX_WRONG && sofar != THE_WORD){

        cout<<"You have "<<MAX_WRONG-wrong<<" trials remaining.\n";
        cout<<"You have the following letters: "<<used<<endl;
        cout << "\nSo far, the word is:\n" << sofar << endl;
        //get user's guess
        char guess;

        cout<<"Enter your guess:";
        cin>>guess;
        guess=toupper(guess);

        while(used.find(guess) != string::npos){

            cout<<"You already guessed the character\n";
            cout<<"Enter your guess:";
            cin>>guess;
            guess=toupper(guess);

        }

        used+=guess;

        if(THE_WORD.find(guess) != string::npos){

            cout<<"Thats correct "<<guess<<" is in the word.\n";
            //update sofar

            for(int i=0;i<THE_WORD.length();i++){

                if(THE_WORD[i]==guess){

                    sofar[i]=guess;
                }

            }

        }

        else{

            cout<<"Sorry the word does not have that letter\n";
            ++wrong;
        }

    }

    //shut down
    if (wrong == MAX_WRONG){

        cout << "\nYou’ve been hanged!";

    }
    else{

        cout << "\nYou guessed it!";
    }

    cout << "\nThe word was " << THE_WORD << endl;

    return 0;
}
#include "allheaders.h"

// global constants
const char X = 'X';
const char O = 'O';
const char EMPTY = ' ';
const char TIE = 'T';
const char NO_ONE = 'N';

// function prototypes
void instructions();
char askYesNo(string question);
int askNumber(string question, int high, int low = 0);
char humanPiece();
char opponent(char piece);
void displayBoard(const vector<char>& board);
char winner(const vector<char>& board);
bool isLegal(const vector<char>& board, int move);
int humanMove(const vector<char>& board, char human);
int computerMove(vector<char> board, char computer);
void announceWinner(char winner, char computer, char human);

int main(){

int move;
const int NUM_SQUARES = 9;
vector<char> board(NUM_SQUARES, EMPTY);

instructions();

char human = humanPiece();
char computer = opponent(human);
char turn = X;

displayBoard(board);

while (winner(board) == NO_ONE){

    if (turn == human){

        move = humanMove(board, human);
        board[move] = human;
    }

    else{

        move = computerMove(board, computer);
        board[move] = computer;
    }

    displayBoard(board);
    turn = opponent(turn);

}

    announceWinner(winner(board), computer, human);
    return 0;

}

void instructions(){

    cout<<"Welcome to the ultimate man-machine showdown.Tic_tac_toe\n where human brain is pit against silicon processor\n\n";
    cout<<"Make your move by entering a number 0-8 corresponding to the board position as illustrated below:\n\n";
    cout<<" 0 | 1 | 2 \n";
    cout<<"-----------\n";
    cout<<" 3 | 4 | 5 \n";
    cout<<"-----------\n";
    cout<<" 6 | 7 | 8 \n";
    cout<<"Prepare youself human the battle is about to begin.";

}

char askYesNo(string question){

    char response;
    do{

        cout << question << " (y/n): ";
        cin >> response;

    } while (response != 'y' && response != 'n');

    return response;
}

int askNumber(string question, int high, int low){

    int number;
    do{

    cout << question << " (" << low << " – " << high << "):";
    cin >> number;

    } while (number > high || number < low);

    return number;

}

char humanPiece(){

    char go_first=askYesNo("Do you want to go first:");

    if(go_first=='y'){

        return X;
    }

    else{

        cout<<"Your bravery will be your undoing.I will go first then\n";
        return O;
    }
}

char opponent(char piece){

    if(piece==X){

        return O;
    }

    else{

        return X;
    }
}

void displayBoard(const vector<char>& board){

    cout<<"\n\t"<< board[0] <<" | "<< board[1] <<" | "<< board[2]<<" \n";
    cout<<"\t-----------\n";
    cout<<"\n\t"<< board[3] <<" | "<< board[4] <<" | "<< board[5]<<" \n";
    cout<<"\t-----------\n";
    cout<<"\n\t"<< board[6] <<" | "<< board[7] <<" | "<< board[8]<<" \n\n";
}

char winner(const vector<char>& board)
{
    // all possible winning rows
    const int WINNING_ROWS[8][3] = { {0, 1, 2},
                                    {3, 4, 5},
                                    {6, 7, 8},
                                    {0, 3, 6},
                                    {1, 4, 7},
                                    {2, 5, 8},
                                    {0, 4, 8},
                                    {2, 4, 6} };

    const int TOTAL_ROWS=8;

    //if any winning row has 3 same values which are not empty then we have our winner
    for(int row=0;row<TOTAL_ROWS;++row){

        if((board[WINNING_ROWS[row][0]] != EMPTY)&&
        ((board[WINNING_ROWS[row][0]])==(board[WINNING_ROWS[row][1]]))&&
        ((board[WINNING_ROWS[row][1]]))==(board[WINNING_ROWS[row][2]])){

            return board[WINNING_ROWS[row][0]];
        }

    }

    //if they is no winner and no remaining empty spaces then it is a tie

    if((count(board.begin(),board.end(),EMPTY))==0){

        return TIE;
    }
    //the game is still on

    return NO_ONE;
}

inline bool isLegal(int move, const vector<char>& board){

    return (board[move] == EMPTY);
}

int humanMove(const vector<char>& board,char human){

    int move=askNumber("Where will you move:",(board.size()-1));

    while(!isLegal(move,board)){

        cout<<"That square is already occupied, foolish human\n";
        move=askNumber("Where will you move:",(board.size()-1));
    }

    cout<<"Fine";

    return move;

}

//AI strategy to make the game competitive

int computerMove(vector<char> board, char computer){

    unsigned int move = 0;
    bool found = false;

    //if computer can win on the next move that's the move to make
    while(!found && move<board.size()){

        if(isLegal(move,board)){

            board[move] = computer;
            found = winner(board) == computer;
            board[move] = EMPTY;

        }

        if(!found){

            ++move;
        }

    }

    //if the latter case is not possible then the computer blocks the human from winning in the next move

    if(!found){

        move=0;
        char human=opponent(computer);

        while(!found && move<board.size()){

            if(isLegal(move,board)){

                board[move]=human;
                found=winner(board)==human;
                board[move]=EMPTY;

            }

            if(!found){

                ++move;
            }
        }
    }

    //otherwise move to the best open square

    if(!found){

        move=0;
        unsigned int i=0;
        const int BEST_MOVES[]={4,0,2,6,8,1,3,5,7};
        //pick best open square

        while(!found && i<board.size()){

            move=BEST_MOVES[i];

            if(isLegal(move,board)){

                found=true;
            }

            ++i;
        }
    }

    cout<<"I shall take square number "<<move<<endl;
    
    return move;

}

void announceWinner(char winner,char computer,char human){

    if(winner==computer){

        cout<<winner<<" has won\n";
        cout<<"As predicted human, i am triumphant now proof,\nthat computers are better than computers in all regards\n";
    }

    else if(winner==human){

        cout<<winner<<" has won\n";
        cout<<"No, no it cannot be somehow you tricked me human\n";
        cout<<"But never again ,I, the computer swear it.\n";

    }

    else{

        cout<<"It is a tie\n";
        cout<<"You were lucky somehow you managed to tie me\n";
        cout<<"Celebrate because this is teh best you will ever achieve\n";
    }
}


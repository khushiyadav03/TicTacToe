#include <bits/stdc++.h>
using namespace std;

// function to print current state of board
void printBoard(char board[3][3]){
    // rows
    for(int i = 0; i<3; i++){
        // columns
        for(int j = 0; j<3; j++){
            cout << board[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

// function to check whether the curr player won or not
bool checkWin(char board[3][3], char turn){
    // check all rows
    for(int i = 0; i<3; i++){
        if(board[i][0] == turn && board[i][1] == turn && board[i][2] == turn){
            return true; // player win;
        }
    }

    // check all columns
    for(int i = 0; i<3; i++){
        if(board[0][i] == turn && board[1][i] == turn && board[2][i] == turn){
            return true; // player win;
        }
    }

    // check 1st diagonal
    if(board[0][0] == turn && board[1][1] == turn && board[2][2] == turn){
        return true;
    }

    // check 2nd diagonal
    if(board[0][2]== turn && board[1][1] == turn && board[2][0] == turn){
        return true;
    }

    return false;
}

int main(){
    char board[3][3] = {
        {'1','2','3'},
        {'4','5','6'},
        {'7','8','9'}
    };

    char turn = 'X';
    int choice;
    int row, col;

    cout << "TIC TAC TOE GAME" << endl;

    for(int i = 0; i<9; i++){
        printBoard(board);
        cout << "Enter choice (1-9): ";
        cin >> choice;

        if(choice < 1 || choice > 9){
            cout << "Invalid choice" << endl;
            i--;
            continue;
        }

        row = (choice - 1) / 3;
        col = (choice - 1) % 3;

        if(board[row][col] == 'X' || board[row][col] == 'O'){
            cout << "Cell already occupied" << endl;
            i--;
            continue;
        }

        board[row][col] = turn;

        if(checkWin(board, turn)){
            printBoard(board);
            cout << "player " << turn << " wins" << endl;
            return 0;
        }

        turn = (turn == 'X') ? 'O' : 'X';
    }

    printBoard(board);
    cout << "It's draw" << endl;

    return 0;
}
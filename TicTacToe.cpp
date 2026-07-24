/*
@author: Melissa Randolph
@date: 07/23/2026
@purpose: Creating a Program to play Tic-Tac-Toe
*/

#include <iostream>
using namespace std;


    const int ROWS = 3;
    const int COLS = 3;

    //Declaring functions before main
    void initializeBoard (char board[][COLS]);
    void displayBoard (const char board[][COLS]);
    void getPlayerMove (char board[][COLS] , char currentPlayer);
    bool checkWin (const char board[][COLS], char player);
    bool isBoardFull (const char board[][COLS]);
    
int main(){  
    char board[ROWS][COLS]; //Declaring a 2D array of chars to repesent the 3x3 game board

    char currentPlayer = 'X'; //Player 'X' starts first 
    bool gameWon = false; //Flag to track if someone won
    bool gameDraw = false; //Flag to track if board is full (tie)

    cout << "====================================\n";
    cout << "        Welcome To TIC-TAC-TOE      \n";
    cout << "=====================================\n\n";

    initializeBoard(board); //Call function to populate board with blank spaces

    while (!gameWon && !gameDraw){ //Main Game Loop (runs until game is won or drawn)
        displayBoard(board); //Call function to print board grid to screen
        getPlayerMove(board, currentPlayer); //Prompt current player and record valid move

        if (checkWin(board, currentPlayer)){ //Check if the move created a winning line
            displayBoard(board); //Show final board state
            cout << "Congratulations! Player " << currentPlayer << " WINS!\n";
            gameWon = true; //Set flag to break the while loop 
        }
        else if (isBoardFull(board)){ //Checks if the board is full with no winner
            displayBoard(board); //Show final board state
            cout << "It's a DRAW! No more moves available.\n"; 
            gameDraw = true; //Set flag to break the while loop
        }
        else{
            if (currentPlayer == 'X'){ 
                currentPlayer = 'O'; //Switch turn to Player O
            }
            else {
                currentPlayer = 'X'; //Swich turn to Player X
            }
        }
    }
    return 0;
}

void initializeBoard(char board[][COLS]){
    for (int r = 0; r < ROWS; r++){ //Nested loops to iterate through rows and columns
        for (int c = 0; c < COLS; c++){    
            board[r][c] = ' '; //Clear array element
        }
        
    }
}

void displayBoard(const char board[][COLS]){
    cout << "\n 1     2      3\n";  //Prints column header numbers (1,2,3)
    for (int r = 0; r < ROWS; r++){ //Outer loop prints each row
        cout << r + 1 << " "; //Print row numbers (1-based for user)

        for (int c = 0; c < COLS; c++){ // Inner loop prints column contents and vertical separators
            cout << " " << board[r][c] << " ";
            if (c < COLS - 1) cout << "|"; //Print vertical line between columns
        }
        cout << "\n";

        if (r < ROWS - 1){
            cout << "  ---+---+---\n"; //Print horizontal divider line between rows
        }
        }
        cout << "\n";
    } 

    void getPlayerMove(char board[][COLS], char currentPlayer){
        int row, col;
        bool validMove = false; //Flag for input validation loop

        while (!validMove){ //Input validation loop 
            cout << "Player " << currentPlayer << ", enter row (1-3) and column (1-3) separated by space: ";
            cin >> row >> col;
             
            if (row < 1 || row > 3 || col < 1 || col > 3){ //Check if inputs are within valid range (1 to 3)
                cout << "Invalid entry! Row and column must be between 1 and 3. Try again.\n";
            }
            else if (board[row - 1][col - 1] != ' '){ //Convert 1-based input to 0-based index & check if occupied
                cout << "That position is already taken! Choose an empty spot. \n";
            }

            else {
                board[row - 1][col - 1] = currentPlayer; //Store maker in 2D array using 0-indexed bounds
                validMove = true; //Exit validation loop 
            }
        }
    }

    bool checkWin(const char board[][COLS], char p){ 
        for (int i = 0; i < 3; i++){ //Loops through all 3 rows and 3 columns
            if (board[i][0] == p && board[i][1] == p && board[i][2] == p) return true; //Check horizontal row i
            if (board[0][i] == p && board[1][i] == p && board[2][i] == p) return true; //Check vertical column i
        }

        if (board[0][0] == p && board[1][1] == p && board[2][2] == p) return true; //Checks main diagonal (top-left to bottom-right)
        if (board[0][2] == p && board[1][1] == p && board[2][0] == p) return true; //Checks anti-diagonal (top-right to bottom-left)

        return false; //Return false if no winning cominations match
    }

    bool isBoardFull(const char board[][COLS]) {
        for (int r = 0; r < ROWS; r++){ //Search every position in 2D array
            for (int c = 0; c < COLS; c++){
                if (board[r][c] == ' '){ //If an empty cell is found, board is not full
                    return false;
                }
            }
        }
        return true; //No empty spaces found, draw conculsion
    }
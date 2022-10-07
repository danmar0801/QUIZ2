#include<stdio.h>
#include"string.h"
#include<stdbool.h>
// tic tac toe game between 2 players or player vs computer
char box[10]={'0','1','2','3','4','5','6','7','8','9'};
void markingBoard(){
}
void printBoard(){
    printf("\n\n");
    printf("Tic Tac Toe\n");
    printf('Player 1 (X) -- player 2 (O)\n\n');
    printf("+-----+\n");
    printf("|%c|%c|%c|\n",box[1],box[2],box[3]);
    printf("+-----+\n");
    printf("|%c|%c|%c|\n",box[1],box[2],box[3]);
    printf("+-----+\n");
    printf("|%c|%c|%c|\n",box[1],box[2],box[3]);
    printf("+-----+\n\n");


    
}
int main(){
    // prompt the user for the game they wish to play
        // 1 = player v player
        // 2 = player v AI
    // read information from console
        // if input = 1 
            // while there is no winner = true for player v player
        // if input = 2
            // while there is no winner = true for player v AI
    // display console based on user input and create tictactoe table
            // 
    // while there is no winner = true
        // ask user for input
        // update table
        // creat random computer input
        // update table
        // is there a winner? no? while there is no winner = true
        // is there a winner? yes? while there is a winner= false
    // print winner
    printf("welcome to tic tac toe");
    int input;
    scanf("%d",&input);
    bool game;
    game = false;
    if (input == 1)
    {
        printf("gamemode selected: player v player");
    }
    else if (input == 2)
    {
        printf("gamemode selected: player v AI");
    }
    
    
    // +-----+
    // | | | |
    // +-----+
    // | | | |
    // +-----+
    // | | | |
    // +-----+
    return 0;
}
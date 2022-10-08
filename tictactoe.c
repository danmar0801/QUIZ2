#include<stdio.h>
#include"string.h"
#include<stdbool.h>
// tic tac toe game between 2 players or player vs computer
char box[10]={'0','1','2','3','4','5','6','7','8','9'};
//this func updates the table to place the payers mark
void markingBoard( int choice, char mark){
    if(choice==1 && box[1]='1')
    {
        box[1]=mark;
    }
    else if (choice==2 && box[2]=='2')
    {
        box[2]=mark;
    }
    else if (choice==3 && box[3]=='3')
    {
        box[3]=mark;
    }
    else if (choice==4 && box[4]=='4')
    {
        box[4]=mark;
    }
    else if (choice==5 && box[2]=='5')
    {
        box[5]=mark;
    }
    else if (choice==6 && box[6]=='6')
    {
        box[6]=mark;
    }
    else if (choice==7 && box[7]=='7')
    {
        box[7]=mark;
    }
    else if (choice==8 && box[8]=='8')
    {
        box[8]=mark;
    }
    else if (choice==9 && box[9]=='9')
    {
        box[9]=mark;
    }
    else {
        printf("Invalid choice...\n");
    }
    
    
}

// this func creates the outline of the tic tac toe baord and lays out what plyabale options there is
void printBoard(){
    printf("\n\n");
    printf("Tic Tac Toe\n");
    printf("Player 1 (X) -- player 2 (O)\n\n");
    printf("+-----+\n");
    printf("|%c|%c|%c|\n",box[1],box[2],box[3]);
    printf("+-----+\n");
    printf("|%c|%c|%c|\n",box[4],box[5],box[6]);
    printf("+-----+\n");
    printf("|%c|%c|%c|\n",box[7],box[8],box[9]);
    printf("+-----+\n\n");
    printf("select square to begin (options 1-9\n");

    
}
int main(){
    int choice;
    char mark;
    //pritns the welcome statments
    printf("welcome to tic tac toe\n");
    printf("select gamemode: 1= player v player, 2= player v AI\n");
    //input for game mode
    int input;
    scanf("%d",&input);
    // this bool is for checking if the game will continue or not
    bool game;
    game = false;
    //will decided which game mode to run
    if (input == 1)
    {
        printf("gamemode selected: player v player\n");
        printBoard();
    }
    else if (input == 2)
    {
        printf("gamemode selected: player v AI\n");
        printBoard();
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
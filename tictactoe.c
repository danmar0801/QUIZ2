#include<stdio.h>
#include"string.h"
#include<stdbool.h>
#include<stdlib.h>
int checkForWin();
// tic tac toe game between 2 players or player vs computer
char box[10]={'0','1','2','3','4','5','6','7','8','9'};
//this func updates the table to place the payers mark
void markingBoard( int choice, char mark){
    if(choice==1 && box[1]=='1')
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
    else if (choice==5 && box[5]=='5')
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
    printf("+-----+\n");
    printf("|%c|%c|%c|\n",box[1],box[2],box[3]);
    printf("+-----+\n");
    printf("|%c|%c|%c|\n",box[4],box[5],box[6]);
    printf("+-----+\n");
    printf("|%c|%c|%c|\n",box[7],box[8],box[9]);
    printf("+-----+\n\n");
}
int main(){
    int choice;
    int player = 1;
    int i;
    char mark;
    //pritns the welcome statments
    printf("welcome to tic tac toe\n");
    printf("select gamemode: 1= player v player, 2= player v AI\n");
    //input for game mode
    int input;
    scanf("%d",&input);
    // this bool is for checking if the game will continue or not
    int game;
    //will decided which game mode to run
    if (input == 1)
    {
        printf("gamemode selected: player v player\n");
        printf("Tic Tac Toe\n");
        printf("Player 1 (X) -- player 2 (O)\n\n");
        game = 1;

        do{
            printBoard();
            player = (player % 2)? 1:2;

            printf("player %d, enter a number from 1-9, to place you mark on the board: ",player);
            scanf("%d",&choice);
            mark = (player==1)? 'X':'O';
            markingBoard(choice, mark);
            i = checkForWin();
            
            if (i == 1){
                printf("we have a winner\n");
                printBoard();
                game = 0;
            }
            else if (i==-1)
            {
                printf("its a draw\n");
                printBoard();
                game = 0;
            }
            player++;

        }while (game ==1);
    }
    else if (input == 2)
    {
        printf("gamemode selected: player v AI\n");
        int option[9]= {1,2,3,4,5,6,7,8,9};
        int ai_choice = rand();
    }
    
    
    
    
    // +-----+
    // |1|2|3|
    // +-----+
    // |4|5|6|
    // +-----+
    // |7|8|9|
    // +-----+
    return 0;
}
int checkForWin(){
    //checking if there is a horizontal win
    if (box[1]==box[2] && box[2]==box[3])
    {
        return 1;
    }
    else if (box[4]==box[5] && box[5]==box[6])
    {
        return 1;
    }
    else if (box[7]==box[8] && box[8]==box[9])
    {
        return 1;
    }
    //checking if there is a vertical win
    if (box[1]==box[4] && box[4]==box[7])
    {
        return 1;
    }
    else if (box[2]==box[5] && box[5]==box[8])
    {
        return 1;
    }
    else if (box[3]==box[6] && box[6]==box[9])
    {
        return 1;
    }
    //checking if there is a diagnoal win
    if (box[1]==box[5] && box[5]==box[9])
    {
        return 1;
    }
    else if (box[3]==box[5] && box[5]==box[7])
    {
        return 1;
    }
    // check if there is a draw
    else if (box[1]!= '1' && box[2]!='2' && box[3]!='3' && box[4]!='4' && box[5]!='5' && box[6]!='6' && box[7]!='7' && box[8]!='8' && box[9]!='9'){
        return -1;
    }
    else{
        return 0;
    }
}
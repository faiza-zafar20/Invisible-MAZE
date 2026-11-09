#include <stdio.h>
#include<stdlib.h>
#include "common.h"
#include "game.h"
void showMenu() {
    printf("Welcome to the Game!\n");
    printf("1. Start Game\n");
    printf("2. Instructions\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
}
void showInstructions(){
    printf("\n---INSTRUCTIONS---\n");
    printf("W-Move up\n");
    printf("S-Move down\n");
    printf("A-Move left\n");
    printf("D-Move right\n");
    printf("Goal: find the exit (E) in the maze.\n");
    printf("? = unrevealed path, # =wall, P=player, E=exit\n");
    printf("Press any key to return to the menu.\n");
    getchar(); getchar(); // Wait for user input
}
void startGame(){
    char input;
    moves = 0;
    //initialize maze (Bazil's fuction)
    initializeMaze();
    revealCells(playerRow, playerCol);
    while (1) {
        displayMaze();
        system("cls ||clear"); // Clear the console for better visibility
        printf("Enter your move (W/A/S/D): ");
        scanf(" %c", &input);
        if (movePlayer(input)) {
            revealCells(playerRow, playerCol);}
            if (checkWin()) {
                printf("Congratulations! You've found the exit in %d moves!\n", moves);
                printf("Press any key to return to the menu.\n");
                getchar(); getchar(); // Wait for user input
                break;
            }
         else {
            printf("Invalid move. Try again.\n");
        }
    }
}
//Author: Bazil Asif
//Roll number: 26K-0028

#include<stdio.h>
#include"maze.h"

char maze[ROWS][COLS];
int revealed[ROWS][COLS];

void initializeMaze(void){
    const char layout[ROWS][COLS]={
    	{'#','#','#','#','#','#','#','#','#','#'},
        {'#',' ',' ',' ','#',' ',' ',' ',' ','#'},
        {'#','#','#',' ','#',' ','#','#',' ','#'},
        {'#',' ',' ',' ',' ',' ','#',' ',' ','#'},
        {'#',' ','#','#','#',' ','#',' ','#','#'},
        {'#',' ',' ',' ','#',' ',' ',' ',' ','#'},
        {'#','#','#',' ','#','#','#','#',' ','#'},
        {'#',' ',' ',' ',' ',' ',' ','#',' ','#'},
        {'#',' ','#','#','#','#',' ',' ','E','#'},
        {'#','#','#','#','#','#','#','#','#','#'}};
    
	int row, col;

    for (row = 0; row < ROWS; row++){
        for (col = 0; col < COLS; col++){
            maze[row][col] = layout[row][col];
            revealed[row][col] = 0;
        }
    }
}//end function

void revealCells(void){
    int rowChange[5] = {0, -1, 1, 0, 0};
    int colChange[5] = {0, 0, 0, -1, 1};
    int i, row, col;

    if (playerRow < 0 || playerRow >= ROWS || playerCol < 0 || playerCol >= COLS){
        return;
    }

    for (i = 0; i < 5; i++){
        row = playerRow + rowChange[i];
        col = playerCol + colChange[i];
        if (row >= 0 && row < ROWS && col >= 0 && col < COLS) {
            revealed[row][col] = 1;
        }
    }
}//end function

void displayMaze(void){
    int row, col;

    printf("\nINVISIBLE MAZE RUNNER\n");
    printf("Moves: %d\n\n", moves);

    for (row = 0; row < ROWS; row++){
        for (col = 0; col < COLS; col++){
			if (row == playerRow && col == playerCol){
        		printf("P ");
            }
			else if (revealed[row][col] == 0){
            	printf("? ");
            }
			else{
            	printf("%c ", maze[row][col]);
            }
        }
        printf("\n");
    }
    printf("\nP = Player | # = Wall | E = Exit | ? = Hidden\n");
    printf("Blank cells are open paths\n");
}//end function

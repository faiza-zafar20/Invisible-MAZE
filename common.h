#ifndef COMMON_H
#define COMMON_H
#define ROWS 10
#define COLS 10
extern char maze[ROWS][COLS];
extern int revealed[ROWS][COLS];
extern int playerRow;
extern int playerCol;
extern int moves;
//bazil's functions 
void initializeMaze();
void revealCells(int r, int c);
void displayMaze();
//Aleeha's functions 
int movePlayer(char input);
int checkWin();
//faiza'z functions
void showMenu();
void showInstructions();
void startGame();
#endif

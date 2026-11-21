#include<stdio.h>
#include "player.h"
int playerRow = 1;
int playerCol = 1;
int moves = 0;
int movePlayer(char direction)
{
	int newRow=playerRow;
	int newCol=playerCol;
	switch(direction)
	{
		case 'W':
		case 'w':
			newRow--;
			break;
		case 'S':
		case 's':
			newRow++;
			break;
		case 'A':
		case 'a':
			newCol--;
			break;
		case 'D':
		case 'd':
			newCol++;
			break;
		default:
			return;
	}
	if(newRow < 0 || newRow>=ROWS || newCol < 0 || newCol >=COLS){
		return;
	}
	if(maze[newRow][newCol]=='#'){
		return;
	}
	playerRow=newRow;
	playerCol=newCol;
	moves++;
}
int checkWin(void){
	if(maze[playerRow][playerCol]=='E'){
		return 1;
	}
	return 0;
}

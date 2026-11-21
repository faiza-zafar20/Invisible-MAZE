#include <stdio.h>
#include "common.h"
#include "game.h"

int main(void){
	int choice;
	while(1){
		showMenu();
		scanf("%d",&choice);
		switch(choice){
			case 1:
				startGame();
				break;
			case 2:
			    showInstructions();
				break;
			case 3:
				printf("Thanks for playing!\n");
				return 0;
			default:
				printf("Invalid choice!Try again\n");		
		}
	}
	return 0;
}

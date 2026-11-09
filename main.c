#include<stdio.h>
#include<stdlib.h>
#include"game.h"
int main(){
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
                printf("Exiting the game. Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
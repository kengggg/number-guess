#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define WHT "\e[0;37m"
#define CYN "\e[0;36m"

#define MAX_LIFE 3
#define MAX_RAND 9

#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int getRand(int maxval){
    srand(time(NULL));
    int r = rand() % 10;

    return r;
}

int main(){
    int player;
    int game;
    int diff;
    int currentLife;

    game = getRand(MAX_RAND);
    currentLife = MAX_LIFE;

    do {
        printf(CYN "Life(s): ");
        for(int i=0;i<currentLife;i++){
            printf(RED "♥ ");
        }
        printf("\n");

        printf(WHT "Please guess the number: ");
        scanf("%d", &player);

        diff = player - game;

        if(player == game) {
            printf(GRN "That's RIGHT!!!\n\n");
        } else if (abs(diff) == 1) {
            printf(YEL "That's CLOSE!!!\n\n");
            currentLife--;
        } else if (diff > 0) {
            printf(RED "That's too high!\n\n");
            currentLife--;
        } else if (diff < 0) {
            printf(RED "That's too low\n\n");
            currentLife--;
        }

        if(currentLife <= 0) {
            printf(RED "SORRY NO LIFE REMAINS... 😭\n");
            break;
        }

    } while (player != game);

    printf(RED "GAME OVER\n");

    return 0;
}
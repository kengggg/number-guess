#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define WHT "\e[0;37m"
#define CYN "\e[0;36m"

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int getRand(int maxval){
    srand(time(NULL));
    int r = rand() % 10;

    return r;
}

void printGameOver(void){
    printf(RED "GAME OVER 💀💀💀");
    printf(RED "SORRY NO LIFE REMAINS... 😭\n");
}
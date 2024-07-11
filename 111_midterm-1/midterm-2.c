#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int MAX_ROUND = 3;

int getPlayerChoice(const int round);
int getComputerChoice();
char* judgeGame(const int player, const int comp);
char* mapToString(const int number);
void printResult(const int round, const int player, const int comp);

int main() {
    int player, comp;
    for (int round = 1; round <= MAX_ROUND; round++) {
        player = getPlayerChoice(round);
        comp = getComputerChoice();
        printResult(round, player, comp);
    }
    
    return 0;
}

// get the player's choice
int getPlayerChoice(const int round) {
    printf("Input: Round %d = ", round);

    // 1:scissor, 2:rock, 3:paper
    int choice = 0;
    scanf("%d", &choice);
    if (choice < 1 || choice > 3) {
        scanf("%d", &choice);
    }
    return choice;
}

// get a choice from computer randomly
int getComputerChoice() {
    srand(time(NULL));
    return (rand() % 3) + 1;
}

// Judge whom wins the game
char* judgeGame(const int player, const int comp) {
    if (player == comp) {
        return "Tie.";
    }
    else if (
        (player == 1 && comp == 3) ||
        (player == 2 && comp == 1) ||
        (player == 3 && comp == 2) 
    ) {
        return "User win!";
    }
    else {
        return "Computer win!";
    }
}

// Map number to string
// 1:Scissors, 2:Rock, 3:Paper
char* mapToString(const int number) {
    switch (number) {
        case 1:
            return "Scissors";
        case 2:
            return "Rock";
        case 3:
            return "Paper";
        default:
            return NULL;
            break;
    }
}

// output the game's result
void printResult(const int round, const int player, const int comp) {
    printf("\nOutput:\n");
    printf("===== Round %d =====\n", round);
    printf("Computer = %s\n", mapToString(comp));
    printf("User = %s\n", mapToString(player));
    printf("%s\n", judgeGame(player, comp));
    printf("===== Round %d =====\n", round);
}
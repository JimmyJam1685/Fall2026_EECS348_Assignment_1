/*
genAI_assignment.c
Desc: a C program that has a user try to guess a number between 1 and 10
Author: James Orrick
Created 9/7/2026
Human Collaborators: None
AIs involved: Gemini and codellama
changelog:
   9/7/2026: removed const vars to save space
   9/7/2026: after about an hour fiddling with error handing, updated error language for better
   clarity.

*/
#include <stdio.h>

int main() {
    int guess = 0; //user guesses
    int won = 0;// exit variable for winning
    int error = 0;// exit variable for bad inputs

    printf("Guess a number between 1 and 10.\n"); // answer is 7

    for (int attempt = 1; attempt <= 3; attempt++) {
        printf("Attempt %d/%d. Enter your guess: ", attempt, 3);

        if (scanf(" %d", &guess) == 1) { //grabs the users guess from the terminal
            if (guess == 7) { //correct case
                printf("Correct! You win!\n");
                won = 1;
                break; // Stop the loop immediately on correct guess
            } if (guess < 7) {
                printf("Too low! Try again.\n");
            } else {
                printf("Too high! Try again.\n");
            }
        } else { //Error handling. I don't have the knowledge to make this not just brick on a string
            // best I could do was clarity.
            printf("Invalid input.\n");
            won = 1; error = 1; // setting up exit variables
            break;

        }


    }

    if (!won) { //fail exit
        printf("Game over! You've used all attempts");}

    if (error) {//error exit
    printf("Exiting Program.\n");}

    return 0;
}

/* Creator: EAU MALLEN
   Student ID: 240156
   Date: 19/03/26
   Lab: Lab 2
   Program: Guessing Program

   Algorithm:
   1. The function prototypes are declared; int get_user_guess(), void print_unsuccessful_message(int guess, int target),
      void print_successful_message(int attempts), void print_sorry_messages(int target.

   2. Initialion process: srand(time(0)) is initiated to capture random number generation from secret = (rand() % 20) + 1,
      everytime the loop ends and starts again.

   3. A constraint is set to max_attemps = 5.

   4. The program then enters a while loop that continues, aslong as the attempts is less than max_attempts.

   5. If the user guess matches the secret, it runs the print_successsful_messag() and immediately ends the program.

   6. Checks for FEED BACK. Else IF you still have lives left, it runs print_unsuccessful_message() -
      it then prints Try again.

   7. If the guess is right, the loop breaks early via the return 0 inside the condition.

   8. If you lose, if the loop finishes, where the attemps reach max_attemps without match, 
      the program moves to the final line. 

*/

#include <stddef.h>
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

// Function variables
int get_user_guess();
void print_unsuccessful_message(int guess, int target);
void print_successful_message(int attempts);
void print_sorry_message(int target);

int main() {
    int secret, guess, attempts = 0;
    const int max_attempts = 5;

    // Seed the random number generator
    srand(time(0));
    secret = (rand() % 20) + 1; // Generates 1 to 20

    printf("I am thinking of a number between 1 and 20. Can you guess what it is?\n "); 

    while (attempts < max_attempts) {
        guess = get_user_guess();
        attempts++;

        if (guess == secret) {
            print_successful_message(attempts);
            return 0; // Game ends     
        } 
        
        else if (attempts < max_attempts) {
            print_unsuccessful_message(guess, secret);
            printf("Try again! ", max_attempts - attempts);
        }
    }

    print_sorry_message(secret);
    return 0;
}

// --- Function Definitions ---

int get_user_guess() {
    int g;
    printf("Enter your guess: ");
    scanf("%d", &g);
    return g;
}

void print_unsuccessful_message(int guess, int target) {
    if (guess > target) {
        printf("Your guess is high \n");
    } 
    else {
        printf("Your guess is low \n");
    }
}

void print_successful_message(int attempts) {
    printf("Congratulations! You did it!\n", attempts);
}

void print_sorry_message(int target) {
    printf("Sorry! The number was %d.\nYou should have gotten it by now.\nBetter luck next time. ", target);
}

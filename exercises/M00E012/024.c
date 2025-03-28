#include <stdio.h>

// Explicit Declaration Exercise

int main(){
    int maxScore = 500; // Maximum score possible in the game
    int userScore; // User's actual score
    
    float totalScore; // Percentage of the user's score in relation to the maximum available score
    
    printf("User's score:\n"); // Prompt the user to enter their score
    scanf("%d", &userScore); // Read the user's score from input
    
    totalScore = (float) userScore * 100 / maxScore; // Calculate the percentage of the user's score
    printf("Percentage is: %.1f", totalScore); // Print the percentage
    
    return 0;
}

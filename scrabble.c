#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(char word[]);

int main(void)
{
    char word1[100];
    char word2[100];

    // Get input words from both players
    printf("Player 1: ");
    scanf("%99s", word1);

    printf("Player 2: ");
    scanf("%99s", word2);

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // Print the winner with their word
    if (score1 > score2)
    {
        printf("Player 1 wins! Word: %s\n", word1);
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins! Word: %s\n", word2);
    }
    else
    {
        printf("Tie!\n");
    }

    // Print each word's score on a new line
    printf("Player 1 score: %d\n", score1);
    printf("Player 2 score: %d\n", score2);

    // Optional: pause to see the result in Windows
    printf("Press Enter to exit...");
    getchar(); // clear leftover newline
    getchar(); // wait for user input
}

int compute_score(char word[])
{
    int score = 0;
    for (int i = 0; i < strlen(word); i++)
    {
        char c = tolower(word[i]);
        if (c >= 'a' && c <= 'z')
        {
            score += POINTS[c - 'a'];
        }
    }
    return score;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int Random_Number;
    srand(time(0));
    Random_Number = rand() % 100 + 1; // For generating random number between (1-100)
    int Guess;
    printf("Guess the number between 1 to 100:\n");
    int count = 1; // For counting the number of attempts
    while (Guess != Random_Number)
    {
        scanf("%d", &Guess);
        if (Guess < Random_Number)
        {
            printf("Guess higher Value please!\n");
        }
        else if (Guess > Random_Number)
        {
            printf("Guess lower value please!\n");
        }
        else if (Guess == Random_Number)
        {
            printf("Congratulations! You guessed the number in %d attempts.\n", count);
        }
        else
        {
            printf("Sorry! try one more time!\n");
        }
        count++;
    }

    return 0;
}
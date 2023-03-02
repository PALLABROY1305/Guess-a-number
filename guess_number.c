#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
    int number, guess, nguesses;

    srand(time(0));

    number = rand() % 100 + 1; // generates randum number between 1-100
    // printf("The number id %d",&number);

    // Keep running the loop until the number is guessed
    do
    {
        printf("Guess a number between 1-100 :-");
        scanf("%d", &guess);

        if (guess > number)
        {
            printf("Lower number please \n");
        }

        else if (guess < number)
        {
            printf("Higher number please \n");
        }
        else
        {
            printf("You guessed it in %d attempts ", nguesses);
        }
        nguesses++;

    } while (guess != number);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int userChoice, computerChoice;

    printf("===== SNAKE WATER GUN GAME =====\n");

    printf("\nChoose your option:\n");
    printf("1. Snake\n");
    printf("2. Water\n");
    printf("3. Gun\n");

    printf("\nEnter your choice: ");
    scanf("%d", &userChoice);

    // Generate computer choice
    srand(time(NULL));
    computerChoice = (rand() % 3) + 1;

    printf("\nYou chose: ");
    
    if(userChoice == 1)
        printf("Snake\n");
    else if(userChoice == 2)
        printf("Water\n");
    else if(userChoice == 3)
        printf("Gun\n");
    else
    {
        printf("Invalid choice!\n");
        return 0;
    }

    printf("Computer chose: ");

    if(computerChoice == 1)
        printf("Snake\n");
    else if(computerChoice == 2)
        printf("Water\n");
    else
        printf("Gun\n");

    // Determine winner
    if(userChoice == computerChoice)
    {
        printf("\nIt's a Draw!\n");
    }
    else if((userChoice == 1 && computerChoice == 2) ||
            (userChoice == 2 && computerChoice == 3) ||
            (userChoice == 3 && computerChoice == 1))
    {
        printf("\nYou Win! 🎉\n");
    }
    else
    {
        printf("\nComputer Wins! 💻\n");
    }

    return 0;
}
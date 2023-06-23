#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>

int main (void)
{
	int choice, num, attempt;
	char gamemode[20];
	srand(time(NULL));

	// Game's description
	puts("This is a guessing game!!");
	puts("=-=-=-=-=-=-=-=-=-=-=-=-=");
	puts("Rules are simple:");
	puts("- Guess a number.");
	puts("- You have limited attempts, use them carefully.");
	puts("- The game will give you hints each time you miss.");
	puts("");
	// User choice
	puts("Choose your difficulty:");
	puts("0- VERY EASY (20 ATTEMPTS, from 0 to 100)");
	puts("1- EASY (10 ATTEMPTS, from 0 to 100)");
	puts("2- MEDIUM (20 ATTEMPTS, from 0 to 1000)");
	puts("3- HARD (30 ATTEMPTS, from 0 to 10000)");
	puts("");
	printf("Your choice: ");

	scanf("%d", &choice);

	int destroy = 0;

	while (destroy != 1)
	{
		switch (choice)
		{
			case 0:
				strcpy(gamemode, "VERY EASY (0-100)");
				attempt = 20;
				num = random() % 101;
				destroy++;
				break;
			case 1:
				strcpy(gamemode, "EASY (0-100)");
				attempt = 10;
				num = random() % 101;
				destroy++;
				break;
			case 2:
				strcpy(gamemode, "MEDIUM (0-1,000)");
				attempt = 20;
				num = random() % 1001;
				destroy++;
				break;
			case 3:
				strcpy(gamemode, "HARD (0-10,000)");
				attempt = 30;
				num = random () % 10001;
				destroy++;
				break;
			default:
				puts("");
				puts("Invalid choice, choose one difficulty to continue! (0-3)");
				scanf("%d", &choice);
		}
	}

	int i = 0, pick;

	for (; i < attempt; i++)
	{
		int notification = attempt - i;
		printf("\n\n_______________\n%s\n%d left.\n---------------", gamemode, notification);
		printf("\nPick a number: ");
		scanf("%d", &pick);

		if (pick > num && i != attempt-1)
		{
			printf("\nThe number %d is incorrect, try again!\n", pick);
			printf("HINT: The mysterious number is SMALLER");
		}
		else if (pick < num && i != attempt-1)
		{
			printf("\nThe number %d is incorrect, try again!\n", pick);
			printf("HINT: The mysterious number is GREATHER");
		}
		else if (pick == num)
		{
			printf("\nYou won the game!!!! Congratulations :D\n");
			printf("The mysterious is %d\n", num);
			return (0);
		}
	}
	printf("\nYou lost :(\n");
	printf("The mysterious number was: %d\n", num);
	return (0);
}

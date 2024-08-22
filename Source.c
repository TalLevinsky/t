#include <stdlib.h>
#include <stdio.h>

/**
The main function of the program.
*/
enum choice{programming, knockKnock, wordPlay};

enum choice userChoice(void);
int main(void)
{
	enum choice temp = userChoice();
	printJoke(temp);
	return 0;
}
enum choice userChoice(void) 
{
	enum choice temp = 0;
	printf("What kind of a joke would you like?\n");
	printf("Programming joke - %d\n", programming);
	printf("Knock-knock joke - %d\n", knockKnock);
	printf("Wordplay joke - %d\n", wordPlay);
	scanf_s("&d", &temp);
	return temp;
}
void printJoke(enum choice joke)
{
	printf("\nYour Joke:\n");
	printf("----------\n");
	printf("yes yes yes");
	switch (joke)
	{
	case programming:
		printf("My mom asked me to go to the grocery store.\n");
		printf("She said: \"Buy a loaf of bread, and if they have eggs, get a dozen.\"\n");
		printf("I went and came back with 12 loaves of bread.\n");
		printf("My mom said: \"Why did you get 12 loaves of bread???\"\n");
		printf("I said: \"Because they had eggs!\"\n");
		break;
	case knockKnock:
		printf("Knock knock\n");
		printf("Who's there?\n");
		printf("Doris\n");
		printf("Doris who?\n");
		printf("Doris locked, that's why I'm knocking!\n");
		break;
	case wordPlay:
		printf("What did the Eskimo write in his diary? (Hebrew)\n");
		printf("Yomani, haya kar.\n");
		break;
	default:
		printf("A priest, a rabbi and a duck walk into a bar.\n");
		printf("The bartender says: Is this some kind of a joke?!\n");
		break;
	}

}
#include <stdio.h>

int main(void)
{
	char adjective[20];
	char food[20];
	char chore[20];
	char furniture[20];

	/* Get the words to use in the madlib */

	printf("Enter an adjective: ");
	scanf("%s", adjective);

	printf("Enter a food: ");
	scanf("%s", food);

	printf("Enter a household chore (past tense): ");
	scanf("%s", chore);

	printf("Enter an item of furniture: ");
	scanf("%s", furniture);


	/* Display the output */

	printf("\n\nDon’t touch that %s %s!\n", adjective, food);
	printf("I just %s the %s!\n", chore, furniture);

	return(0);
}


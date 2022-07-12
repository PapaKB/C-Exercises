# include <stdio.h>
# include <stdlib.h>

int main() {

	int secretNumber = 5;
	int guess;
	int guessCount = 0;

	while(guess != secretNumber && guessCount < 10) {
		printf("Enter a number: ");
		scanf("%d/n", &guess); 
		guessCount++;
	}

	if(guess == secretNumber) {
		printf("You win!\n");
	}
	else {
		printf("You've used all your guesses.\n");
	}
}
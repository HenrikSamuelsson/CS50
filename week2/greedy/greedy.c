#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void) {
	float fAmount = -1.0;
	int iAmount;
	int numberOfCoins = 0;

	while (fAmount < 0) {
		printf("O hai! How much change is owed?");
		fAmount = GetFloat();
	}

	iAmount = (int) round(fAmount * 100);

	while (iAmount >= 25) {
		iAmount -= 25;
		numberOfCoins++;
	}

	while (iAmount >= 10) {
		iAmount -= 10;
		numberOfCoins++;
	}

	while (iAmount >= 5) {
		iAmount -= 5;
		numberOfCoins++;
	}

	while (iAmount >= 1) {
		iAmount -= 1;
		numberOfCoins++;
	}

	printf("%i\n", numberOfCoins);

	return 0;
}

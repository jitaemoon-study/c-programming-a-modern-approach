#include <stdio.h>

int main(void)
{
	// Dollars-and-cents amount
	float amount;
	printf("Enter the amount: ");
	scanf("%f", &amount);

	printf("With tax added: $%.2f", amount + amount * 0.05);

	return 0;
}


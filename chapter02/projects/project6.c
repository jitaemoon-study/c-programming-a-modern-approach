#include <stdio.h>

/*
 * Horner's Rule
 */
int main(void)
{
	int x, result;
	printf("Enter a number: ");
	scanf("%d", &x);
	result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

	printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 = %d\n", result);

	return 0;
}


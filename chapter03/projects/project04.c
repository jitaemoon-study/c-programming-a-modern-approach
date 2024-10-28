#include <stdio.h>

int main(void)
{
	int number1, number2, number3;
	printf("Enter phone number[(xxx) xxx-xxxx]: ");
	scanf("(%3d) %3d-%4d", &number1, &number2, &number3);
	printf("You entered %03d.%03d.%04d\n", number1, number2, number3);

	return 0;
}


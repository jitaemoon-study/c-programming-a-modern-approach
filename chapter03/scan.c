#include <stdio.h>

int main(void)
{
	int i, j;
	float x, y;

	/*
	 * scanf ignores white-space characters
	 * "peeks" at the final new-line character which will be the first character read by the next call of scanf
	 * "put back" not matching characters
	 */
	scanf("%d%d%f%f", &i, &j, &x, &y);
	printf("i = %d, j = %d, x = %f, y = %f", i, j, x, y);

	return 0;
}


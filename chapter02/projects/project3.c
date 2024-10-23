#include <stdio.h>

int main(void)
{
	int radius;
	printf("Enter radis: ");
	scanf("%d", &radius);
	float volume = 4.0f / 3.0f * 3.14f * radius * radius * radius;

	printf("Volume = %f\n", volume);

	return 0;
}


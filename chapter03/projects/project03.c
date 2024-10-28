#include <stdio.h>

/*
 * ISBN(International Standard Book Number)
 */
int main(void)
{
	int gs1_prefix, group_identifier, publisher_code, item_number, check_digit;
	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &gs1_prefix, &group_identifier, &publisher_code, &item_number, &check_digit);
	printf("GS1 prefix: %03d\n", gs1_prefix);
	printf("Group identifier: %d\n", group_identifier);
	printf("Publisher Code: %03d\n", publisher_code);
	printf("Item number: %05d\n", item_number);
	printf("Check digit: %d\n", check_digit);

	return 0;
}


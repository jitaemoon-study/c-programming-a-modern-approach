#include <stdio.h>

int main(void)
{
	int item_number, year, month, date;
	float price;

	printf("Enter item item_number: ");
	scanf("%d", &item_number);
	printf("Enter unit price: ");
	scanf("%f", &price);
	printf("Enter purchase date(mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &date, &year);

	printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");
	printf("%-d\t$%6.2f\t%02d/%02d/%04d\n", item_number, price, month, date, year);

	return 0;
}


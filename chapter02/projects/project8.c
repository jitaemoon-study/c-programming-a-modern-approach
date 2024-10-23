#include <stdio.h>

int main(void)
{
	float amount_of_loan, interest_rate, monthly_payment, remaining_balance;
	printf("Enter amount of loan: ");
	scanf("%f", &amount_of_loan);
	printf("Enter interest rate: ");
	scanf("%f", &interest_rate);
	printf("Enter monthly payment: ");
	scanf("%f", &monthly_payment);
	remaining_balance = amount_of_loan;

	remaining_balance = remaining_balance - monthly_payment + (remaining_balance * interest_rate / 100 / 12);
	printf("Balance remaining after first payment: $%.2f\n", remaining_balance);
	remaining_balance = remaining_balance - monthly_payment + (remaining_balance * interest_rate / 100 / 12);
	printf("Balance remaining after second payment: $%.2f\n", remaining_balance);
	remaining_balance = remaining_balance - monthly_payment + (remaining_balance * interest_rate / 100 / 12);
	printf("Balance remaining after third payment: $%.2f\n", remaining_balance);

	return 0;
}


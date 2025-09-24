#include <stdio.h>
int main()

{
	int day;
	int month;
	int year;
	int suma = 0;

	printf("Tell me the day, month and year of her birth: ");

	printf("Tell me the day: ");
	scanf_s("%d", &day);

	printf("Tell me the month: ");
	scanf_s("%d", &month);

	printf("Tell me the year of 4 digits ");
	scanf_s("%d", &year);

	suma = day + month + year;
	printf(" The result is %d", suma);

}
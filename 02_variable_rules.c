/*
 * 02_variable_rules.c
 * Example C program showing variable naming rules and use of 'auto'
 */

#include <stdio.h>

int main(void) {
	/* Valid identifier examples */
	int age = 30;            /* letters, digits, underscore; not starting with digit */
	double _balance = 1234.56; /* underscore allowed */
	char initial = 'A';

	/* Keywords cannot be used as identifiers (for example: int, return, auto) */
	/* 'auto' is a storage-class specifier; in modern C it's rarely used explicitly. */
	auto int temp = 5; /* explicit use of auto (same as int temp = 5) */

	/* Some invalid identifier examples (for reference, commented out):
	   int 2nd = 0;   // starts with digit -> invalid
	   int my-var = 1; // hyphen not allowed -> invalid
	*/

	printf("age = %d\n", age);
	printf("_balance = %.2f\n", _balance);
	printf("initial = %c\n", initial);
	printf("temp (auto) = %d\n", temp);

	return 0;
}

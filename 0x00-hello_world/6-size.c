#include <stdio.h>
/**
 * main - A programm to print size of various computer types
 * Return: 0 (successful)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(a));
printf("Size of a int: %lu bytes(s)\n", (usigned long)sizeof(b));
printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_int - prints integers
 * @num: input number
 *
 * Return: void
 */

void print_int(void *number)
{
	void *p;
	int num = *((int *)number);
	int x;
	int y;

	printf("%d\n", num);
	if (num < 0)
	{
		num = num * -1;
		putchar('-');
	}
	x = num % 10;
	num = num - x;
	if (num >= 10)
	{
		y = num / 10;
		p = &y;
		print_int(p);
	}
	putchar(x + '0');
}

/**
 * print_float - prints floating point numbers
 * @num: input number
 *
 * Return: void
 */

/*void print_float(double num);*/

/**
 * print_string - prints a string
 * @str: input string
 *
 * Return: void
 */

void print_string(char *str)
{
	int i;
	int n = strlen(str);

	for (i = 0; i < n; i++)
		putchar(str[i] );
}

/**
 * print_char - prints a character
 * @c: input character
 *
 * Return: void
 */

void print_char(void *p)
{
	putchar(*(char *)p);
}

/**
 * main - checks code
 *
 * Return: Always 0.
 */

int main(void)
{
	/*double x = 0.345;*/
	char msg[] = "I am just testing";
	char c = 'a';
	int num = 67;
	void *ptr;
	void *ptr2;

	ptr = &num;
	ptr2 = &c;
	/*print_float(x);*/
	print_string(msg);
	putchar('\n');
	putchar(num);
	putchar('\n');
	print_char(ptr);
	putchar('\n');
	printf("%c %c %c\n", 48, 49, 50);
	print_int(ptr2);
	putchar('\n');
	return (0);
}

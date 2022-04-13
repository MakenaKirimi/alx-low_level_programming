#include "function_pointers.h"
#include "3-calc.h"
/**
 * get_op_func -retunn which operation to be called
 * @s: selector char input
 *
 * Description: operation selector funct
 *
 * Return: index of call back function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	if (s == NULL)
		return (NULL);

	i = 0;
	while (ops[i].op != NULL)
	{
		if (*ops[i].op == s[0])
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
/**
 * prints -print string
 * @s: string input
 *
 * Description: prints string
 */
void prints(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
/**
 * print_num -print number
 * @n: number
 *
 * Description: print number
 */
void print_num(int n)
{
	if (n / 10 == 0 && n % 10 == 0)
	{
		return;
	}
	else
	{
		print_num(n / 10);
		_putchar(n % 10 + '0');
	}
}


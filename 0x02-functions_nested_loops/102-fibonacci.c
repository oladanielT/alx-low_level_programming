#include <stdio.h>
/**
 * main - fibonacci function
 * Return: Always (0)
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int i = 0;

	while (i < 50)
	{
		if (i == 0)
		{
			printf("%d", a);
		}
		else if (i == 1)
		{
			printf(", %d", b);
		}
		else
		{
			b += a;
			a = b - a;
			printf(", %d", b);
		}
		i++;
	}
	printf("\n");
	return (0);
}

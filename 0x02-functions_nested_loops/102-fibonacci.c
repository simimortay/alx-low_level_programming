#include <stdio.h>

/**
 * main - main block
 * Description: Print the first 50 fibonacci numbers, starting with 1 and 2.
 * Numers must be coma and space seperated.
 * Return: Always 0
 */
int main(void)
{
	int i = 2;
	long int x = 1, y = 2;
	long int z;

	printf("%lu, ", x);
	while (i <= 50)
	{
		if (i == 50)
		{
			printf("%lu\n", y);
		}
		else
		{
			printf("%lu, ", y);
		}

		z = y;
		y += x;
		x = z;
		i++;
	}

	return (0);
}

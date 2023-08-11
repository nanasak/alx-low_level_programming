#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * main - prints the sum of arguments of positive numbers
 * @argc: count of arguments
 * @argv: arrays of argument
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int x;
	unsigned int k, sum = 0;
	char *y;

	if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			y = argv[x];

			for (k = 0; k < strlen(y); k++)
			{
				if (y[k] < 48 || y[k] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			
			sum += atoi(y);
			y++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}

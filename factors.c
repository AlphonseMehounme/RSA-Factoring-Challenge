#include <stdio.h>
#include <stdlib.h>

/**
 * main - Compute the factors of numbers
 * @ac: Number of args
 * @av: Array of args
 *
 * Return: 0 if successful
 * 1 if failed
 */
int main(int ac, char **av)
{
	FILE *fp;
	char *lineread;
	size_t lsize;
	unsigned long num, i;

	fp = fopen(av[1], "r");
	if (fp == NULL)
		return (1);
	while (getline(&lineread, &lsize, fp) != -1)
	{
		num = atoi(lineread);
		for (i = 2; i <= num; i++)
		{
			if (num % i == 0)
			{
				printf("%lu=%lu*%lu\n", num, num / i, i);
				break;
			}
		}
	}
	fclose(fp);
	return (0);
}

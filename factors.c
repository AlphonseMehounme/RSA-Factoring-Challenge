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
	int num, i;

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
				printf("%d=%d*%d\n", num, num, i);
			}
		}
	}
	fclose(fp);
	return (0);
}

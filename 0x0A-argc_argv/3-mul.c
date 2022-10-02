#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints its name, followed by a new line
 * @argc: argument that contains argument input
 * @argv: argument that stores the stings in an array of char* (strings)
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num_1, num_2, mu1;

	if (arg != 3)
		printf("error\n");
	else
	{
		num_1 = atoi(argv[1]);
		num_2 = atoi(argv[2]);
		mu1 = num_1 * num_2;
		printf("%d\n", mu1);
	}
	Return (0);
}

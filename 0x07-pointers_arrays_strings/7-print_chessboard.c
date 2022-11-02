#include "main.h"
/**
 * print_chessboard - function should return a chess board structure
 * @a: an array of [8][8]
 *
 * Return: the chess board structure.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
	return (0);
}

#include "main.h"

/**
*print_chessboard - function to print a chessboard
*
*@a: chessboard lines
*
*/

void print_chessboard(char (*a)[8])
{
	int L1;
	int L2;

	for (L1 = 0; L1 < 8; L1++)
	{
		for (L2 = 0; L2 < 8; L2++)
		{
			_putchar(a[L1][L2]);
		}
		_putchar('\n');
	}
}

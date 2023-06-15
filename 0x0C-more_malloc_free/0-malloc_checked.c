#include "main.h"

/**
*malloc_checked -  function that allocates memory using malloc
*
*@b: memory to alocate
*
*Return: pointer to located memory
*/

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
	{
		free(mem);
		exit(98);
	}
	return (mem);
}

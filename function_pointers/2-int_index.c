#include "function_pointers.h"
/**
 * int_index - Searches for the firstelement in an array that matches condition
 * @array: Pointer to the array.
 * @size: Number of elements in the array.
 * @cmp: Function to compare each element.
 *
 * Return: Index of the first match, or -1 if no match or invalid input.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	if (!cmp)
	{
		return (-1);
	}

	if (!array)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{

	if (cmp(array[i]) != 0)
		return (i);
	}
	return (-1);
}

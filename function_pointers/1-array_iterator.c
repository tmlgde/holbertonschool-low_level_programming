#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * array_iterator - Executes a function on each element of an array.
 * @array: Pointer to the array.
 * @size: Number of elements in the array.
 * @action: Function to apply on each element.
 *
 * If size is zero or action is NULL, the function does nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!size)
	{
		return;
	}

	if (!action)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

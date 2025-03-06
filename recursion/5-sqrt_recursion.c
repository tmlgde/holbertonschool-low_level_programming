#include "main.h"

/**
 * _sqrt_recursion - function returns the natural square root of a number
 *
 * @n: integer to find the square root of
 *
 * Return: the square root of n
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	return (square_root(n, 0));

}
/**
 * square_root - finds the square root
 *
 * @x: first integer
 * @y: second integer
 *
 * Return: 1
 */

int square_root(int x, int y)
{
	if (y * y > x)
	{
		return (-1);
	}
	else if (y * y == x)
	{
		return (y);
	}
	else
	{
		return (square_root(x, y + 1));
	}
	return (1);
}

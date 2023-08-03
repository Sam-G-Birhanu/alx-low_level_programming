#include "main.h"

/**
 * _sqrt_recursion - this function finds the square root of a given number
 * sqrtRecursiveHelper - finds square root
 * @low: represents the lower half
 * @high: represents the highes limit
 * @n: this variable represents the number in the square root
 * Return: this function returns an int
 */

int sqrtRecursiveHelper(int n, int low, int high)
{
	int mid;
	int square;

	if (low > high)
	{
		return (-1);
	}
	mid = low + (high - low) / 2;
	square = mid * mid;
	if (square == n)
	{
		return (mid);
	}
	else if (square < n)
	{
		return (sqrtRecursiveHelper(n, mid + 1, high));
	}
	else
	{
		return (sqrtRecursiveHelper(n, low, mid - 1));
	}
}
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrtRecursiveHelper(n, 0, n));
}

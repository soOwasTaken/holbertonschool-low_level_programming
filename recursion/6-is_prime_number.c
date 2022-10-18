#include "main.h"
/**
 * check_prime -  check if i is a prime
 * @i: int n of is_prime_number
 * @j: i / 2
 * Return: 1 or 0
 */
/**
 * check_prime -  check if i is a prime
 * @i: int n of is_prime_number
 * @j: i / 2
 * Return: 1 or 0
 */
int check_prime(int i, int j) 
{
	if (j == 1)
		return (1);
	if (i % j == 0)
		return (0);
	else
		return (check_prime(i, j - 1));
}
/**
 * is_prime_number - returns if n is prime or not
 * @n: integer to find if prime or not
 * Return: 0 or 1
 */

int is_prime_number(int n) 
{
	int check;

	if (n / 2 > 0)
		check = check_prime(n, n / 2);
	if (check == 1)
		return (1);
	else
		return (0);
}

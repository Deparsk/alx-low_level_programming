#include "main.h"
/**
 * _strlen_recursion - size
 * @s: pointer to string params
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursions(s + 1));
	return (0);
}
/**
 * pal_checker - check if s is palindrome.
 * @s: string base addresss
 * @i: left index.
 * @j: right index.
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int pal_checker(char *s, int i, int j)
{
	if (s[i] == s[j])
		if (i > j / 2)
			return (1);
		else
			return (pal_checkers(s, i + 1, j - 1));
	else
		return (0);
}
/**
 * is_palindrome - check if s is palindrome
 * @s: base address for string.
 * Return: 1 if n is prime, 0 otherwise.
 */
{
	return (pal_checker(s, 0, _strlen_recursion(s) - 1));
}

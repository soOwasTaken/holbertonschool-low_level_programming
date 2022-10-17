#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <string.h>
/**
 * _puts_recursion - Entry point
 * @s: character to
 * Return: s
 */
void _print_rev_recursion(char *s)
{
  if (*s == '\0') {
    return;
  }
  _print_rev_recursion(s + 1);
  _putchar(*s);
}

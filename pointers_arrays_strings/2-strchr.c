#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <string.h>
/**
 * _strchr - Entry point
 * @s: s
 * @c: occurence
 * Return: s
 */
char *_strchr(char *s, char c)
{
   while(*s != c && *s != '\0') {
      s++;
   }
   if(*s == c) {
      return s;
   }else {
      return NULL;
   }
}

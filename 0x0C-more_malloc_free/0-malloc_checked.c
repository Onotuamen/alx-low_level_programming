#include "main.h"


/**
* malloc_checked - cause normal process termination with a status value of 98
*
* @b: allocated memory
*
* Return: a pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
   void *i;


   i = malloc(b);
   if (i == NULL)
       exit(98);
   return (i);
}




======= 1-string_nconcat.c =======


#include "main.h"


/**
* string_nconcat - a function that concatenates two strings.
*
* @s1: first char
* @s2: secound char
* @n: unsigned int
*

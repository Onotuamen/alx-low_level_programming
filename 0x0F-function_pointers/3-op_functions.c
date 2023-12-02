#include "3-calc.h"


	int op_add(int a, int b);
	int op_sub(int a, int b);
	int op_mul(int a, int b);
	int op_div(int a, int b);
	int op_mod(int a, int b);


/**
* op_add - Returns the precise sum of two numbers.
* @a: The first number.
* @b: The second number.
*
* Return: The sum of a and b.
*/
	int op_add(int a, int b)
	{
		return (a + b);
	}
/**
* op_sub - Returns the exact difference of two numbers.
* @a: The first number.
* @b: The second number.
*
* Return: The difference of a and b.
*/
	int op_sub(int a, int b)
	{
		return (a - b);
	}
/**
* op_mul - Returns the multiplocation of two numbers.
* @a: The first number.
* @b: The second number.
*
* Return: The product of a and b.
*/
	int op_mul(int a, int b)
	{
		return (a * b);
	}
/**
* op_div - thid returns the division of two numbers.
* @a: The first number.
* @b: The second one.
*
* Return: The quotient of a and b.
*/
	int op_div(int a, int b)
	{
		return (a / b);
	}
/**
*
* op_mod - Return first the remainder of the division of both numbers.
* @a: first one.
* @b: The second one.
*
* Return: The remainder of the division of a by b.
*/
	int op_mod(int a, int b)
	{
		return (a % b);
	}


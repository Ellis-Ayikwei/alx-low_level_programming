#include "3-calc.h"

/**
  *op_add - returns the sum of a and b.
  *@a: int to be sumed
  *@b: int to be summed
  *Return: the sum.
 */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);



int op_add(int a, int b)
{
	return (a + b);
}

/**
  *op_sub - returns the difference of a and b.
  *@a: int to be sbbed
  *@b: int to be sub from a
  *Return: the sum.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  *op_mul - returns the mul of a and b.
  *@a: int to be mul
  *@b: int to be mul
  *Return: the sum.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  *op_div - returns the div of a and b.
  *@a: int to be div
  *@b: int to be div
  *Return: the sum.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
  *op_mod - returns the mod of a and b.
  *@a: int to be mod
  *@b: int to be mod
  *Return: the mod.
 */
int op_mod(int a, int b)
{
	return (a % b);
}


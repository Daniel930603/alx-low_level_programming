#include "main.h"

/**
 * get_endianness - Write a function that checks the endianness.
 * Prototype: int get_endianness(void).
 * Return: 1, if architecture is little endian, 0 in case of big endian.
 */
int get_endianness(void)
{
	int i = 1;
	char *c = (char *)&i;

	return ((*c) ? 1 : 0);
}

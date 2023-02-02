#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	short int word = 0x0001;
        char *b = (char *)&word;
	
        return (b[0] ? 1 : 0);
}

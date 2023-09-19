#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: pointer pointing to the string
 * Return: 0
 */

void rev_string(char *s)
{
        int length, z;
        char temp;

        for (length = 0; *(s + length); length++)
        	;
        z = 0;
        --length;
        while (z <= length)
        {
                temp = *(s + z);
                *(s + z) = *(s + length);
                *(s + length) = temp;
                ++z;
		--length;
        }
}

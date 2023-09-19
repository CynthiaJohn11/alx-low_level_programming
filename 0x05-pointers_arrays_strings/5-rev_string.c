#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: pointer pointing to the string
 * Return: 0
 */

void rev_string(char *s)
{
        int p,z;
        char temp;

        for(p = 0; *(s + p);p++);
        z = 0;
        --p;
        while(z <= p)
        {
                temp = *(s + z);
                *(s + z) = *(s + p);
                *(s + p) = temp;
                ++z;
		--p;
        }
}

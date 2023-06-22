#include "main.h"
/**
 * positive_or_negative - Prints negative or positive value
 * Return: Always 0
 *@i : Interger
 */

void positive_or_negative(int i)
{
if (i > 0)
printf("%d is positive\n", i);
else if (i < 0)
printf("%d is negativ\n", i);
else
printf("%d is zero\n", i);
}

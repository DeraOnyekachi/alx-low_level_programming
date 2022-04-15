#include "main.h"
/**
 * positive_or_negative - Entry point
 * @i: int value
 * Return: Always 0 (Successs/correct)
 */
void positive_or_negative(int i)
{
if (i == 0)
{
printf("%d is zero\n", i);
}
else if (i < 0)
{
printf("%d is negative\n", i);
}
else
{
printf("%d is positive\n", i);
}
}

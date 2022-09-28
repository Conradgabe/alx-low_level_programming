#include <stdio.h>

/**
 * _islower - Entry point
 * Description: checks is a character is lowercase
 * @c: the integer value it receives
 * Return:  if true or  if false.
 */
int _islower(int c)
{
int i = 'a';

for (i = 'a'; i <= 'z'; i++)
{
/* refer int c*/
if (c == i)
{
return (1);
}
}
return (0);
}

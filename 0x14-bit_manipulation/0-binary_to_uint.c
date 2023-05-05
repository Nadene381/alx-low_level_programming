#include "main.h"
/**
* binary_to_uint - a function that convert a binary to unsigned int
*@b: pointer passed in function
* Return: converted number or 0
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int conversion = 0;
int n = 0;
if (b == NULL)
{
return (0);
}
do {
if (b[n] == '0' || b[n] == '1')
{
conversion = (conversion << 1) | (b[n] - '0');
}
else if (b[n] == '\0')
{
break;
}
else
{
return (0);
}
n++;
} while (1);
return (conversion);
}

/**
* create_array - a function that creates an array of chars, and initializes it with a specific char.
* @size: variable passed in function
* @c: variable passed in function
* Return: 1
*/
char *create_array(unsigned int size, char c)
{
char *s;
unsigned int i = 0;
if (size == 0)
return (NULL);
s = malloc(sizeof(*s) * size);
if (s != NULL)
{
while (i < size)
{
s[i] = c;
i++;
}
}
return (s);
}

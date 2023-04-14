#include "main.h"
/**
* create_file - function that creates a file
* @filename: variable passed in function
* @text_content: variable passed in function
* Return: 1 or -1 when error
*
*/
int create_file(const char *filename, char *text_content)
{
int myFile = -1;
do {
if (filename == NULL)
{
return (-1);
}
if (myFile != 1)
{
myFile = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
}
else
{
return (-1);
}
if ( text_content != NULL)
{
int i;
for (i = 0; text_content[i] != '\0'; i++)
write(myFile, text_content, i);
}
close(myFile);
} while (0);
return (1);
}

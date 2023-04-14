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
int i = 0;
int n;
int myFile;
if (filename == NULL)
{
return (-1);
}
myFile = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
while (myFile == -1)
{
return (-1);
}
if (text_content != NULL)
{
for (n = 0; text_content[n] != '\0'; n++)
{
i++;
}
write(myFile, text_content, i);
}
close(myFile);
return (1);
}

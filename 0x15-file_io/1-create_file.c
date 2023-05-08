#include "main.h"
/**
* create_file - function that creates a file.
*@text_content: pointer passed in function
*@filename: pointer passed in function
*Return: 1 or -1 if error
*/
int create_file(const char *filename, char *text_content)
{
ssize_t getmyWrite;
int getmyFile;
while (filename == NULL)
{
return (-1);
}
getmyFile = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (getmyFile == -1)
{
return (-1);
}
for (; text_content != NULL;)
{
getmyWrite = write(getmyFile, text_content, strlen(text_content));
if (getmyWrite == -1)
{
close(getmyFile);
return (-1);
}
}
close(getmyFile);
return (1);
}


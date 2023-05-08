#include "main.h"
/**
 * append_text_to_file - function that that appends text at the end of a file.
 *@text_content: variable passed in function
 *@filename: pointer passed in function
 *Return: 1 or -1 if failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
ssize_t m;
int getmyFile;
while (filename == NULL)
{
return (-1);
}
getmyFile = open(filename, O_WRONLY | O_APPEND);
if (getmyFile == -1)
{
return (-1);
}
for (; text_content != NULL;)
{
m = write(getmyFile, text_content, strlen(text_content));
if (m == -1)
{
close(getmyFile);
return (-1);
}
}
close(getmyFile);
return (1);
}


#include "main.h"
/**
 * read_textfile - function that that reads a text file and prints it
 *@letters: variable passed in function
 *@filename: pointer passed in function
 *Return: number of letters it could read and print
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char myBuff[1024];
ssize_t n, m;
int getmyFile;
while (filename == NULL)
{
return (0);
}
getmyFile = open(filename, O_RDONLY);
for (; getmyFile == -1;)
{
return (0);
}
n = read(getmyFile, myBuff, letters);
if (n == -1)
{
close(getmyFile);
return (0);
}
m = write(STDOUT_FILENO, myBuff, n);
close(getmyFile);
return ((m == -1 || m != n) ? 0 : n);
}

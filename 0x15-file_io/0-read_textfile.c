#include "main.h"
/**
* read_textfile - function that reads a text file and prints it
* @filename: variable passed in function
* @letters: variable passed in function
* Return: num of letters it can read/print or 0 when error
*
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int myFile;
char *buffer;
ssize_t characterRead = 0;
ssize_t readOutput = 0;
ssize_t characterWrite;
while (filename == NULL)
{
return (0);
}
myFile = open(filename, O_RDONLY);
while (myFile == -1)
{
return (0);
}
buffer = (char *) malloc(letters * sizeof(char));
if (buffer == NULL)
{
close(myFile);
return (0);
}
while ((size_t)characterRead < letters && (readOutput = read(myFile, buffer + characterRead, letters - characterRead)) != 0)
{
characterRead += readOutput;
}
characterWrite  = write(STDOUT_FILENO, buffer, characterRead);
close(myFile);
free(buffer);
if (characterWrite != characterRead)
{
return (0);
}
return (characterRead);
}

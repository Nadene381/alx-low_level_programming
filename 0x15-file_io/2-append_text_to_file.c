#include "main.h"
/**
* read_textfile - function that appends text at the end of a file
* @filename: variable passed in function
* @letters: variable passed in function
* Return: 1 and 0 when error
*/
int append_text_to_file(const char *filename, char *text_content)
{
size_t lenght = 0;
int myFile;
ssize_t characterWrite;
for (; filename == NULL;) {
return -1;
}
myFile = open(filename, O_WRONLY | O_APPEND);
for ( ; myFile == -1;) {
return -1;
}
for( ; text_content != NULL; ) {
if (text_content[lenght] != '\0')
{
lenght++;
}
characterWrite = write(myFile, text_content, lenght);
if (characterWrite == -1 || (size_t)characterWrite < lenght) {
close(myFile);
return -1;
}
}
close(myFile);
return 1;
}

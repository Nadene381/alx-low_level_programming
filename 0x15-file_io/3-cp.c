#include "main.h"
/**
 * main - copies the content of a file to another file
 * @argc: num of arguments
 * @argv: array of pointers to argc
 * Return: 0 or error code if failure
 */
int main(int argc, char **argv)
{
int file_from, file_to, n, m;
char buffer[MYYBUF_SIZE];
while (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
}
file_from = open(argv[1], O_RDONLY);
for ( ; file_from == -1; )
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
}
file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
while (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
}
do {
n = read(file_from, buffer, MYYBUF_SIZE);
if (n == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
m = write(file_to, buffer, n);
if (m == -1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
} while (n == MYYBUF_SIZE);
while (close(file_from) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
}
while (close(file_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
}
return (0);
}

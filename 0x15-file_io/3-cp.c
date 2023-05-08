#include "main.h"
/**
 * main - copies the content of a file to another file
 * @argc: num of arguments
 * @argv: array of pointers to argc
 * Return: 0 or error code if failure
 */
int main(int argc, char **argv)
{
int file_1, file_2, n, m;
char buffer[MYYBUF_SIZE];
while (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
}
file_1 = open(argv[1], O_RDONLY);
for ( ; file_1 == -1; )
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
}
file_2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
while (file_2 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
}
do {
n = read(file_1, buffer,MYYBUF_SIZE);
if (n == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
m = write(file_2, buffer, n);
if (m == -1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
} while (n == MYYBUF_SIZE);
while (close(file_1) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_1), exit(100);
}
while (close(file_2) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_2), exit(100);
}
return (0);
}


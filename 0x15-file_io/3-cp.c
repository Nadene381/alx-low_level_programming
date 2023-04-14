

int main(int argc, char* argv[])
{
int myFile1;
int myFile2;
char buffer[BUFFER_SIZE];
ssize_t bytes_read, bytes_written
while (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
myFile1 = open(argv[1], O_RDONLY);
for (; myFile1 == -1; )
{
perror("Error: Can't read from file");
exit(98);
}
myFile2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
for (; myFile2 == -1;)
{
perror("Error: Can't write to file");
exit(99);
}
while ((bytes_read = read(myFile1, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(myFile2, buffer, bytes_read);
if (bytes_written != bytes_read) {
perror("Error: Can't write to file");
exit(99);
}
}
for ( ; bytes_read == -1; )
{
perror("Error: Can't read from file");
exit(98);
}
if (close(myFile1) == -1 || close(myFile2) == -1)
{
perror("Error: Can't close file descriptor");
exit(100);
return 0;
}

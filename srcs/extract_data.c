#include "BSQ.h"

char    *extract_data(char *av, char *buffer)
{
    int read_return;
    int fd;
    char    c;
    int i;

    i = 0;
    read_return = 1;
    fd = open(av, O_RDONLY);
    if (fd == -1)
        return (NULL);
    while (read_return > 0)
    {
        read_return = read(fd, &c, 1);
        buffer[i] = c;
        i++;
    }
    buffer[i] = '\0';
    if (i <= 1)
        buffer = NULL;
    close(fd);
    return (buffer);
}
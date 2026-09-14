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
    while (read_return != 0)
    {
        read_return = read(fd, &c, 1);
        if (read_return > 0)
        {
            buffer[i] = c;
            i++;
        }
    }
    buffer[i] = '\0';
    close(fd);
    return (buffer);
}
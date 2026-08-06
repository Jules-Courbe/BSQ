#include "BSQ.h"

int    filtab(char *av, t_array *map)
{
    int read_return;
    int fd;
    char    c;
    char    buffer[2048];
    int i;

    map->array = NULL;
    i = 0;
    read_return = 1;
    fd = open(av, O_RDONLY);
    if (fd == -1)
        return (1);
    while (read_return != 0)
    {
        read_return = read(fd, &c, 1);
        buffer[i] = c;
        printf("%c", buffer[i]);
        i++;
    }
    close(fd);
    return (0);
}
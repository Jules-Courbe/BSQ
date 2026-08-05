#include "BSQ.h"

void    filtab(char *av, t_parser *map)
{
    int read_return;
    int fd;

    fd = open(av, O_RDONLY);
    if (fd = -1)
        return (1);
}
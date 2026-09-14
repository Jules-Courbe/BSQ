#include "BSQ.h"
int main(int ac, char **av)
{
    t_array map;
    t_parser info;
    char    *buffer;
    buffer = malloc(sizeof(char) * 2048);
    if (ac == 2)
    {
        buffer = extract_data(av[1], buffer);
        malloc_map(buffer, &map);
        parser(&info, &map);
        display(&map, &info);
    }
}

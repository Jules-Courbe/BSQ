#include "BSQ.h"
int main(int ac, char **av)
{
    int i;

    i = 1;
    t_array map;
    t_parser info;
    t_landmarks gps;
    char    *buffer;
    if (ac < 1)
        return (0);
    while (i < ac)
    {
        buffer = malloc(sizeof(char) * 2048);
        buffer = extract_data(av[i], buffer);
        if (buffer == NULL)
        {
            printf("error");
            return 0;
        }
        if (parser_buffer(buffer) == 1)
            return (0);
        malloc_map(buffer, &map);
        if (parser(&info, &map, buffer) == 1)
            return (0);
        brain(&map, &info, &gps);
        display(&map, &info);
        free_malloc(&map);
        free(buffer);
        i++;
    }
    return (0);
}

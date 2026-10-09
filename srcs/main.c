#include "BSQ.h"
int main(int ac, char **av)
{
    int i;

    i = 0;
    t_array map;
    t_parser info;
    t_landmarks gps;
    char    *buffer;
    buffer = malloc(sizeof(char) * 2048);
    if (ac == 2)
    {
        while (av[i])
        {
            buffer = extract_data(av[1], buffer);
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
        }
        return (0);
    }
}

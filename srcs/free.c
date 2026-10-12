#include "BSQ.h"

void    free_malloc(t_array *map)
{
    int i;

    i = 0;
    while (map->array[i])
    {
        free(map->array[i]);
        i++;
    }
    free(map->array);
    free(map->first_line);
}
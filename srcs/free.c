#include "BSQ.h"
// 2 allocs non free puis pour chaque nouvelle map 1 malloc non free 
void    free_malloc(t_array *map, char *buffer)
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
    free(buffer);
}
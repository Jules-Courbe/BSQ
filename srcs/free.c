#include "BSQ.h"
// 2 allocs non free puis pour chaque nouvelle map 1 malloc non free 
void    free_malloc(t_array *map)
{
    int i;

    i = 0;
    while (map->array[i] != NULL)
    {
        free(map->array[i]);
        i++;
    }
    free(map->array);
    free(map->first_line);
}
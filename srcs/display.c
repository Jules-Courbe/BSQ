#include "BSQ.h"

void    display(t_array *map, t_parser *info)
{
    int i;
    int j;

    j = 0;
    i = 0;
    while (i < info->rows)
    {
        while (j < info->rows + 1)
        {
            write(1, &map->array[i][j], 1);
            j++;
        }
        j = 0;
        i++;
    }
}
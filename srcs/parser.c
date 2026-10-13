#include "BSQ.h"
#include <stdlib.h>

/*
◦✅ All lines must have the same length.
◦✅ There’s at least one line of at least one box.
◦ At each end of line, there’s a line break.
◦✅ The characters on the map can only be those introduced in the first line. 
◦ The map is invalid if a character is missing from the first line, or if two characters (of empty, full and obstacle) are identical.
◦✅ The characters can be any printable character, even numbers.
◦ In case of an invalid map, your program should display map error on the error
output followed by a line break. Your program will then move on to the next
map
*/

int recover_rows_cols(t_parser *info, t_array *map)
{
    int	i;
    char    rows[100];

    i = 0;
    if (!(map->first_line[0] >= '0' && map->first_line[0] <= '9'))
        return (1);
    while (map->first_line[i] >= '0' && map->first_line[i] <= '9')
    {
        rows[i] = map->first_line[i];
        i++;
    }
    rows[i] = '\0';
    info->rows = atoi(rows);
    info->cols = atoi(rows);
    return (0);
}

int check_lenght(char *buffer, t_parser *info)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (buffer[i] != '\n')
        i++;
    i++;
    while (buffer[i])
    {
        if (buffer[i] == '\n' || buffer[i] == '\0')
            j++;
        i++;
    }
    if (j > info->rows || j < info->rows)
        return (1);
    return (0);
}

int check_min_line(t_array *map)
{
    int i;
    int j;
    int count;

    count = 0;
    i = 0;
    j = 0;
    while (map->array[i])
    {
        while (map->array[i][j])
        {
            if (map->array[i][j] == '\n')
                count++;
            j++;
        }
        j = 0;
        i++;
    }
    if (count < 1)
        return (1);
    return (0);
}

int map_symbols(t_array *map, t_parser *info)
{
    int i;

    i = 0;
    while (map->first_line[i] >= '0' && map->first_line[i] <= '9')
        i++;
    // check bien qu il y a 3 symbole pas plus
    // capture les symboles
    info->empty = map->first_line[i];
    info->obstacle = map->first_line[i + 1];
    info->full = map->first_line[i + 2];
    return (0);
}

int line_break(char *buffer, t_parser *info)
{
    int i;
    int j;

    j = 0;
    i = 0;
    while (buffer[i] != '\n')
        i++;
    i++;
    i += info->cols;
    while (j < info->rows - 1)
    {
        if (buffer[i] != '\n')
            return (1);
        j++;
        i += info->cols + 1;
    }
    return (0);
}

int parser(t_parser *info, t_array *map, char *buffer)
{
	if (recover_rows_cols(info, map) == 1)
    {
        printf("error there is no number at the begining of the first line");
    }
	if (check_lenght(buffer, info) == 1)
    {
		printf("error with lenght : %d of line : %d", info->cols, info->rows);
        return (1);
    }
    if (map_symbols(map, info) == 1)
    {
        printf("error of symbols");
        return (1);
    }
    if (check_min_line(map) == 1)
    {
        printf("missing line, need 1 min");
        return (1);
    }
    if (line_break(buffer, info) == 1)
    {
        printf("Error with line break");
        return (1);
    }
	return (0);
}
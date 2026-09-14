#include "BSQ.h"
#include <stdlib.h>

/*
◦ All lines must have the same length. Verifier une fois dans le struct 
◦ There’s at least one line of at least one box.
◦ At each end of line, there’s a line break. verifier dans le buffer donc recuperer la longueur dans la premiere ligne et comparer chaque ligne
◦ The characters on the map can only be those introduced in the first line. 
◦ The map is invalid if a character is missing from the first line, or if two characters (of empty, full and obstacle) are identical.
◦ The characters can be any printable character, even numbers.
◦ In case of an invalid map, your program should display map error on the error
output followed by a line break. Your program will then move on to the next
map
*/

void recover_rows_cols(t_parser *info, t_array *map)
{
    int	i;
    char    rows[100];

    i = 0;
    while (map->first_line[i] >= '0' && map->first_line[i] <= '9')
    {
        rows[i] = map->first_line[i];
        i++;
    }
    rows[i] = '\0';
    info->rows = atoi(rows);
    info->cols = atoi(rows);
}

int	check_lenght(t_parser *info, t_array *map)
{
	// check lenght from parser
}

int parser(t_parser *info, t_array *map)
{
	recover_rows_cols(info, map);
	if (check_lenght(info, map) == 1)
	{
		printf("problemos");
		return (0);
	}
	return (0);
}
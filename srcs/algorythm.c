#include "BSQ.h"

// function fill the bigeste square
void    fill_bigest_square(t_array *map, t_parser *info, t_landmarks *gps)
{
    int initial_y_tmp;
    
    initial_y_tmp = gps->initial_y;
    while (gps->initial_x <= gps->final_x)
    {
        while (gps->initial_y <= gps->final_y)
        {
            map->array[gps->initial_x][gps->initial_y] = info->full;
            gps->initial_y++;
        }
        gps->initial_y = initial_y_tmp;
        gps->initial_x++;
    }
}
/*
int	ft_sqrt(int n)
{
	int i;

	i = 1;
	while (i != n)
	{
		if (n / i == i)
			return (i);
		i++;
	}
	return (0);
}

int ft_square(int n)
{
    return (n * n);
}
*/
void    calculate_euclidean_merge(t_landmarks *gps)
{
    int delta_x;
    int delta_y;
    double merge;

    delta_x = 0;
    delta_y = 0;
    merge = 0;
    // Calcule delta 
    delta_x = gps->final_x - gps->initial_x;
    delta_y = gps->final_y - gps-> initial_y;
    // calcule euclidean merge
    merge = sqrt((delta_x * delta_x + delta_y * delta_y));
    if (merge > gps->merge)
        gps->merge = merge;
}
/*
void    applicate_methode(t_array *map, t_landmarks *gps, t_parser *info)
{
    
}*/

void    brain(t_array *map, t_parser *info, t_landmarks *gps)
{
    gps->initial_x = 0;
    gps->initial_y = 0;
    gps->final_x = 0;
    gps->final_y = 0;
    int i;
    int j;

    i = 0;
    j = 0;
    while (map->array[i])
    {
        while (map->array[i][j])
        {
            j++;
        }
        j = 0;
        i++;
    }
    calculate_euclidean_merge(gps);
    fill_bigest_square(map, info, gps);
}
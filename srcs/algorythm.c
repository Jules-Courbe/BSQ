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

int	ft_sqrt(int n)
{
	int i;

	i = 1;
    if (n == 0)
        return (0)
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

void    calculate_euclidean_merge(t_landmarks *gps)
{
    int delta_x;
    int delta_y;
    int merge;

    int delta_x = 0;
    int delta_y = 0;
    int merge = 0;
    // Calcule delta 
    int delta_x = gps->final_x - gps->initial_x;
    int delta_y = gps->final_y - gps-> initial_y;
    // calcule euclidean merge
    int merge = ft_sqrt(ft_square(delta_x) + ft_square(delta_y);)
    if (merge > info->merge)
        info->merge = merge;
}

void    applicate_methode(t_array *map, t_landmarks *gps, t_parser *info)
{
    
}

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
    calculate_euclidean_merge(gps, )
    fill_bigest_square(map, info, gps);
}
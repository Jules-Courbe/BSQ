#include "BSQ.h"

// function fill the bigeste square
void    fill_biguest_square(t_array *map, t_parser *info, t_landmarks *gps)
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
void    check_bigest_square(t_array *map, t_parser *info, t_landmarks *gps, int x, int y, int count_max)
{
    //trouver un systeme qui d'agrandir la zone en carre
    gps->initial_x = x;
    gps->initial_y = y;
    int new_count_max;
    int limite_x;
    int limite_y;

    limite_x = 0;
    limite_y = 0;
    new_count_max = 0;
    while (map->array[i] != NULL)
    {
        if (map->array[i][j] == info->obstacle)
        {
            
        }
        if (new_count_max > count_max)
        {
            gps->initial_x = x;
            gps->initial_y = y;
            gps->final_x = i;
            gps->final_y = j;
        }
        new_count_max++;

    }   
}

void find_square(t_array *map, t_landmarks *gps)
{
    int x;
    int y;
    int count_max;
    i = 0;
    j = 0;
    count_max = 0;
    // initialiser des limites a chaque etendues
    while (map->array[x])
    {
        while (map->array[x][y])
        {
            check_bigest_square(map, info, gps, x, y, count_max);
            y++;
        }
        y = 0;
        x++;
    }
}
*/
void    brain(t_array *map, t_parser *info, t_landmarks *gps)
{
    gps->initial_x = 0;
    gps->initial_y = 0;
    gps->final_x = 0;
    gps->final_y = 0;
    // find_square(map, gps);
    fill_biguest_square(map, info, gps);
}
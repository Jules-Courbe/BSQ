#include "BSQ.h"

void    malloc_map(char *buffer, t_array *map)
{
    int i;
    int k;
    int j;
    int ligne;
    int colonne;
    int tmp_k;

    tmp_k = 0;
    colonne = 2; // Inisialisation a 1 pour le '\0'
    ligne = 0;
    i = 0;
    k = 0;

    // first_line 
    while (buffer[k] != '\n')
    {
        k++;
    }
    k++;
    tmp_k = k;
    map->first_line = malloc(sizeof(char) * (k));
    if (!map->first_line)
        return;
    while(buffer[i] != '\n')
    {
        map->first_line[i] = buffer[i];
        i++;
    }
    map->first_line[i] = '\n';

    // ligne 
    i = 0;
    while (buffer[i] != '\n')
    {
        i++;
    }
    i++;

    while (buffer[i])
    {
        if (buffer[i] == '\n')
            ligne++;
        i++;
    }
    map->array = malloc(sizeof(char *) * (ligne + 1)); // + 1 = NULL
    if (!map->array)
        return;
    // colonne 
    while (buffer[k] != '\n')
    {
        k++;
    }
    k++;
    while (buffer[k] != '\n')
    {
        k++;
        colonne++;
}

    i = 0;
    while (i < ligne + 1)
    {
        map->array[i] = malloc(sizeof(char) * colonne);
        i++;
    }
    // fill array
    j = 0;
    i = 0;
    while (i < ligne)
    {
        while (j < colonne - 1)
        {
            map->array[i][j] = buffer[tmp_k];
            tmp_k++;
            j++;
        }
        map->array[i][j] = '\0';
        j = 0;
        i++;
    }
    map->array[i] = NULL; 
}
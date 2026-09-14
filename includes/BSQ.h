#ifndef UTILS_H
# define UTILS_H

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * @brief Représente un point en 2D.
 */

typedef struct s_landmarks {
    int x; /*!< Coordonnée en abscisse. */
    int y;  /*!< Coordonnée en ordonnée. */
}   t_landmarks;

/**
 * @brief Représente un point en 2D.§§§§§§a
 */

typedef struct s_parser {
    int     rows;
    int     cols;
    char    empty;
    char    full;
    char    obstacle ;
}   t_parser;

/**
 * @brief Représente un point en 2D.
 */
typedef struct s_array {
    char    **array;  /*!< pointeur de pointeur to char, stock la map  */
    char    *first_line; /*!< pointeur de pointeur to char, stock la premiere ligne  */
}   t_array;

char    *extract_data(char *av, char *buffer);
void    skip_first_line(t_array *map, char *buffer);
void    extract_data_malloc(char *buffer, t_parser map);
int    parser(t_parser *info, t_array *map);
void    display(t_array *map, t_parser *info);
void    malloc_map(char *buffer, t_array *map);


#endif

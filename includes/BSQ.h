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
 * @brief Représente un point en 2D.
 */

typedef struct s_parser {
    int rows;
    int cols;
}   t_parser;

/**
 * @brief Représente un point en 2D.
 */
typedef struct s_array {
    char    **array;  /*!< pointeur de pointeur to char, stock  */
}   t_array;

int    filtab(char *av, t_array *map);

#endif
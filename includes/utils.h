#ifndef UTILS_H
# define UTILS_H

#include <stdio.h>

typedef struct s_landmarks {
    int x;
    int y;
}   t_landmarks;

typedef struct s_parser {
    char    **array;
    int rows;
    int cols;
}   t_parser;

#endif
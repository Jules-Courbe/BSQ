#include "BSQ.h"

int count_line_rows_minus(char *buffer)
{
    int i;
    int count;

    count = 0;
    i = 0;
    while (buffer[i] != '\n' && buffer[i])
    {
        if (buffer[i] == '\0')
            return (0);
        i++;
    }
    i++;
    while (buffer[i])
    {
        i++;
        count++;
    }
    if (count <= 1)
        return (1);
    return (0);
}

// Check printable character are printable 
int check_printable(char *buffer)
{
    int i;

    i = 0;
    while (buffer[i] && (buffer[i] >= 32 && buffer[i] <= '~'))
    {
        if (buffer[i])
            return (0);
        i++;
    }
    return (1);
}

int parser_buffer(char *buffer)
{
    if (count_line_rows_minus(buffer) == 1)
    {
        printf("error with colone or row");
        return (1);
    }
    if (check_printable(buffer))
    {
        printf("error charactere not printable");
        return (1);
    }
    return (0);
}

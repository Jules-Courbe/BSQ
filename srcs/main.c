#include "BSQ.h"
int main(int ac, char **av)
{

   // t_array map;
   // t_parser parser;
    char    *buffer;
    buffer = malloc(sizeof(char) * 2048);
    if (ac == 2)
    {
        buffer = extract_data(av[1], buffer);
        // Parsing before convert the string in a char ** ? 
        if (parser())
        printf("%s", buffer);
    }
}

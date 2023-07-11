#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

char *create_array(unsigned int size, char c);
char *argstostr(int ac, char **av);
char **strtow(char *str);

#endif /* MAIN_H */

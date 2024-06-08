#include "stdio.h"
#include "assert.h"
#include "stdlib.h"

#define ASSERT(condition, message) if (!(condition)) { fprintf(stderr, "%s\n", message); exit(EXIT_FAILURE); }

int main(int argc, char ** argv)
{
    ASSERT(argc > 1 && atoi(argv[1]), "Le nombre de sommets doit être renseigné avec une valeur supérieur à 0");

    int N = atoi(argv[1]);
    

    return 0;
}
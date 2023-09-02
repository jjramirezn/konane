#include <stdio.h>
#include "bijective.h"
#include "errors.h"

int main(int argc, char *argv[])
{
        /* TODO: all this main is not yet implementing the program and
         * is only used for testing for now
         */
        unsigned n;
        char *s = "abcdefg";
        if (parse_bijective(s, &n) != KONANE_SUCCESS) {
                fprintf(stderr, "'%s' is not a valid input", s);
                return 1;
        }
        printf("'%s' is the representation of %u\n", s, n);
        print_bijective(n);
        return 0;
}

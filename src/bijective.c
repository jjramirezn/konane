#include <assert.h>
#include <stdio.h>
#include "errors.h"

#define KONANE_BJVE_BASE        26
#define KONANE_TO_LETTER(N)     ((N) + 'a' - 1)
#define KONANE_LETTER_VAL(C)    ((C) - 'a' + 1)

KONANE_ERROR parse_bijective(char *repr, unsigned *n)
{
        assert(NULL != repr);
        assert(NULL != n);
        for (*n = 0; '\0' != *repr; ++repr) {
                if (*repr < 'a' || 'z' < *repr) {
                        return KONANE_NALETTER;
                }
                *n = *n * KONANE_BJVE_BASE + KONANE_LETTER_VAL(*repr);
        }
        return KONANE_SUCCESS;
}

void print_bijective(unsigned n)
{
        if (0 != n) {
                unsigned q = n / KONANE_BJVE_BASE;
                q = n % KONANE_BJVE_BASE ? q : q - 1;   /* ceil(q) - 1 */
                print_bijective(q);
                putchar(KONANE_TO_LETTER(n - q * KONANE_BJVE_BASE));
        }
}

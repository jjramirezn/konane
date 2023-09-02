#ifndef KONANE_BIJECTIVE_H_
#define KONANE_BIJECTIVE_H_

#include "errors.h"

/* Parses 'repr' as a lower-case base-26 bijective notation and
 * overwrites 'n' with its value. Neither 'repr' nor 'n' can be null
 * pointers. Returns 'KONANE_NALETTER' if any char in 'repr' is outside
 * of a-z and 'KONANE_SUCCESS' otherwise.
 */
KONANE_ERROR parse_bijective(char *repr, unsigned *value);

/* Prints the base-26 bijective notation of 'n'. */
void print_bijective(unsigned n);

#endif

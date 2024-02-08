#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/* Libraries */
#include <stddef.h> /* for size_t */

/* Function Prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);

#endif /* SEARCH_ALGOS_H */

#ifndef SORT_H
#define SORT_H

#include <stddef.h> /* size_t */
#include <stdio.h>  /* printf */

/* Function to print the array */
void print_array(const int *array, size_t size);

/* Quick Sort function */
void quick_sort(int *array, size_t size);

#endif /* SORT_H */

#include "sort.h"

/**
* swap_ints - Swaps two integers
* @a: First integer
* @b: Second integer
*/
void swap_ints(int *a, int *b)
{
if (a != b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
}

/**
* lomuto_partition - Lomuto partition scheme
* @array: Array of integers
* @low: Start index
* @high: End index
* @size: Size of the array (for printing)
*
* Return: Index of the pivot after partition
*/
int lomuto_partition(int *array, int low, int high, size_t size)
{
int pivot = array[high];
int i = low;
int j;

for (j = low; j < high; j++)
{
if (array[j] < pivot)
{
if (i != j)
{
swap_ints(&array[i], &array[j]);
print_array(array, size);
}
i++;
}
}
if (array[i] != array[high])
{
swap_ints(&array[i], &array[high]);
print_array(array, size);
}
return (i);
}

/**
* quick_sort_recursive - Recursive quicksort helper
* @array: Array of integers
* @low: Start index
* @high: End index
* @size: Size of the array
*/
void quick_sort_recursive(int *array, int low, int high, size_t size)
{
if (low < high)
{
int pivot_index = lomuto_partition(array, low, high, size);

quick_sort_recursive(array, low, pivot_index - 1, size);
quick_sort_recursive(array, pivot_index + 1, high, size);
}
}

/**
* quick_sort - Sorts an array using the quicksort algorithm
* @array: Array of integers
* @size: Size of the array
*/
void quick_sort(int *array, size_t size)
{
if (!array || size < 2)
return;

quick_sort_recursive(array, 0, size - 1, size);
}

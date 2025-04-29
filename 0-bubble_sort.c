#include <stdio.h>

void bubble_sort(int *array, size_t size)
{
size_t i, j;
int temp;
int swapped;

for (i = 0; i < size - 1; i++)
{
swapped = 0;

for (j = 0; j < size - 1 - i; j++)
{
if (array[j] > array[j + 1])
{
temp = array[j];
array[j] = array[j + 1];
array[j + 1] = temp;

for (size_t k = 0; k < size; k++)
printf("%d%s", array[k], (k == size - 1) ? "\n" : ", ");
swapped = 1;
}
}

if (swapped == 0)
break;
}
}

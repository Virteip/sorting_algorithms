#include "sort.h"

/**
 * switcher - swap array values
 * @array: array to be sorted
 * @a: low
 * @b: high
 * @size: size of array to print
 * Return: no return just print after each swap
 */
void switcher(int a, int b, int *array, size_t size)
{
int temp;
if (array[a] != array[b])
{
temp = array[a];
array[a] = array[b];
array[b] = temp;
print_array(array, size);
}
}

/**
 * divide - divide the array in two
 * @array: array to be sorted
 * @first: low
 * @last: high
 * @size: size of the array
 * Return: item count
 */
int divide(int *array, int first, int last, size_t size)
{
int i = first;
int j;
int pivot  = array[last];

for (j = first; j <= last; j++)
{
if (array[j] < pivot)
{
switcher(i, j, array, size);
i++;
}
}
switcher(i, last, array, size);
return (i);
}

/**
 * sort - recursive quick_sort
 * @array: array to be sorted
 * @size: size of the array to sort
 * @first: low
 * @last: high
 */
void sort(int *array, int first, int last, size_t size)
{
size_t lomuto;

if (first < last)
{
lomuto = divide(array, first, last, size);
sort(array, first, lomuto - 1, size);
sort(array, lomuto + 1, last, size);
}
}

/**
 * quick_sort - Entry point
 * @array: array to be sorted
 * @size: size of the array to be sorted
 * Return: print array
 */
void quick_sort(int *array, size_t size)
{
if (array && size)
{
sort(array, 0, size - 1, size);
}
}

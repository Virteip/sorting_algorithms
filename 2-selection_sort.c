#include "sort.h"
/**
 * selection_sort - sort by selection method
 * @array: array to be sorted
 * @size: size of the array to be sorted
 * Return - sorted array
 */
void selection_sort(int *array, size_t size)
{
size_t i, i_2, save, temp;

{
for (i = 0; i < size; i++)
{
temp = i;
for (i_2 = i + 1; i_2 < size; i_2++)
{
if (array[i_2] < array[temp])
temp = i_2;
}
if (temp != i)
{
save = array[i];
array[i] = array[temp];
array[temp] = save;
print_array(array, size);
}
}
}
else
{
return;
}
}

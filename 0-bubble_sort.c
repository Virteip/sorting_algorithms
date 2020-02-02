#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order using the Bubble sort algorithm
 * @array: pointer
 * @size: Size of the array
 *
 * Return: none
 **/

void bubble_sort(int *array, size_t size)
{
  int tmp;
  size_t n, j;

  for (n = 0; n <= size -1; n++)
    {

      for (j = 0; j <= size -2; j++)
        {
          if (array[j] > array[j + 1])
            {
              tmp = array[j];
              array[j] = array[j + 1];
              array[j + 1] = tmp;

              print_array(array, size);
            }
        }

    }

}

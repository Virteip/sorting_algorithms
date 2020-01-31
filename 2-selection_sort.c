#include "sort.h"
/**
 * selection_sort - sort by selection method
 * @array: array to be sorted
 * @size: size of the array to be sorted
 * Return - sorted array
 */
void selection_sort(int *array, size_t size)
{
  size_t i, j, temp, hold; 
  
  for (i = 0; i < size-1; i++) 
    { 
      temp = i; 
      for (j = i+1; j < size; j++) 
	{
	  if (array[j] < array[temp])
	    { 
	      min_idx = j; 
	    }
	}
      hold = *(&array[temp]); 
      *(&array[temp]) = *(&array[i]); 
      *(&array[i]) = hold;
      print_array(array, size);
    } 
}

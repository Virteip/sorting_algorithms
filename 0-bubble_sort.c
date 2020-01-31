#include "sort.h"
/**
 * insertion_sort_list - sort an array of integers
 * @array: array to be sorted
 * @size: size of the array to sort
 * Return: no return just print array
 */
void bubble_sort(int *array, size_t size)
{
  int sorted = 0;
  size_t i;
  int temp;
  
  while(sorted == 0)
    {
      sorted = 1;
      for (i = 0; i< size-1; i++)
	{
	  if(array[i] > array[i + 1])
	    {

	      temp = array[i]; 
	      array[i] = array[i + 1]; 
	      array[i + 1] = temp; 
	      sorted = 0;
	      print_array(array, size);
	    }
	}
    }
}

#include "sort.h"
/**
 * insertion_sort_list - 
 *
 * Return: Always 0
 */
void bubble_sort(int *array, size_t size)
{
  int sorted = 0;
  size_t i, j;
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
	      for(j  = 0; j <= size-1; j++)
		{
		  printf("%d ", array[j]);
		}
	      putchar('\n');
	    }
	}
    }
}

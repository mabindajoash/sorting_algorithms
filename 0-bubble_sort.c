#include "sort.h"

/**
  * bubble_sort - sorts arrays of integers
  * inascending order using bubble sort algorithm
  * @array: array to be sorted
  * @size: size of the array
  * Return: No return value
  */

void bubble_sort(int *array, size_t size)
{
	size_t temp, i, j;
	size_t n = size;
	int swapped;

	for (i = 0; i < n - 1; i++)
	{
		swapped = 0;
		for (j = 0; j < n - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swapped = 1;
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
			else
				continue;
			print_array(array, n);
		}
		if (swapped == 0)
			break;
	}
}

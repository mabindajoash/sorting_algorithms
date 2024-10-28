#include "sort.h"

/**
  * selection_sort - sort an array of integers using selection sort
  * @array: array to be sorted
  * @size: size of the array
  * Return: no return value
  */
void selection_sort(int *array, size_t size)
{
	int temp;
	size_t i, j, min_idx;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min_idx] > array[j])
				min_idx = j;
		}
		if (min_idx != i)
		{
			temp = array[min_idx];
			array[min_idx] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}
}

#include "sort.h"
#include <stdio.h>


/**
 * selection_sort - Sorts an array of integers in ascending order
 * @array: the array
 * @size: Size of the array
 *
 * Return: Void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, strp, min_idx;
	int tmp;

	for (step =0; step < size - 1; step++)
	{
		min_idx = step;
		for (i = step + 1; i < size; i++)
		{
			if (array[i] < array[min_idx])
				min_idx = i;
		}

		if (min_idx != step)
		{
			tmp = array[step];
			array[step] = array[min_idx];
			array[min_idx] = tmp;
			print_array(array, size);
		}
	}
}

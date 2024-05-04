#include "sort.h"

/**
 * swap - Swaps the values of 2 int.
 *
 * @a: Pointer to the 1st integer.
 *
 * @b: Pointer to the 2nd integer.
 *
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - Sorts an array of integers using the Bubble Sort algorithm.
 *
 * @array: Pointer to the array to be sorted
 *
 * @size: Size of the array.
 *
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	int swapped;

	i = 0;
	while (i < size)
	{
		j = 0;
		swapped = 0;
		while (j < size - i - 1)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
				swapped = 1;
			}
			j++;
		}
		if (!swapped)
			break;
		i++;
	}
}

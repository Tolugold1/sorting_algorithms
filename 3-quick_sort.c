#include "sort.h"

/**
 * quick_sort - function that sorts an array of integers in ascending
 * order using the Quick sort algorithm
 *
 * @array: pointer to the list array given
 * @size: size of the list array
 * Return: nothing
 */

void quick_sort(int *array, size_t size)
{
	if (size < 2)
	{
		return;
	}
	quicksort_recurssion(array, 0, size - 1, size);
}

/**
 * Lomuto_partition - quick sort lomuto partition process
 * @array: pointer to array given
 * @low: index of the first element in the list
 * @high: index of the last element in the list
 * @size: size of the array
 * Return: int
 */

int Lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot_value = array[high];
	int i = low, j;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot_value)
		{
			swap(&array[i], &array[j]);
			print_array(array, size);
			i++;
		}
	}
	if (high != low && array[high] != array[i])
	{
		swap(&array[i], &array[j]);
	}
	print_array(array, size);
	return (i);
}

/**
 * swap - function that swap pointers value
 * @i: first pointer
 * @j: second pointer
 * Return: nothing
 */

void swap(int *i, int *j)
{
	int temp;

	temp = *i;
	*i = *j;
	*j = temp;
}

/**
 * quicksort_recurssion - function that perform recursion
 * @array: pointer to the list array given
 * @low: lowest value
 * @high: highest value
 * @size: size of the array
 * Return: nothing
 */

void quicksort_recurssion(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int pivot_idx = Lomuto_partition(array, low, high, size);

		quicksort_recurssion(array, low, pivot_idx - 1, size);
		quicksort_recurssion(array, pivot_idx + 1, high, size);
	}
}

#include "sort.h"

/**
 * selection_sort - selection sort algorithm
 * @array: pointer to list array given
 * @size: size of the list
 * Return: nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, least_num;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		least_num = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[i] > array[j])
			{
				least_num = j;
			}
		}
		if (least_num != i)
		{
			temp = array[i];
			array[i] = array[least_num];
			array[least_num] = temp;
			print_array(array, size);
		}
	}
}

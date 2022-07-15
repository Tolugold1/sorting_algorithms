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

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		least_num = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[least_num])
			{
				least_num = j;
			}
		}
		if (array[least_num] != array[i] || least_num != i)
		{
			temp = array[i];
			array[i] = array[least_num];
			array[least_num] = temp;
			print_array(array, size);
		}
	}
}

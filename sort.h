#ifndef SORT_H
#define SORT_H

#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

/* quick sort process function portotype */

int Lomuto_partition(int *array, int low, int high, size_t size);
void swap(int *array, int *i, int *j, size_t size);
void quicksort_recurssion(int *array, int low, int high, size_t size);

/* merge sorting process function prototype */
void merge_sort(int *array, size_t size);
void merge_sort_recurrsion(int *array, int *temp, int left, int right);
void merge_sort_array(int *array, int *temp, int left, int middle, int right);

#endif

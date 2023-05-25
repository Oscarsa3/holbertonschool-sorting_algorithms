#include "sort.h"
void esquema_lomuto(int *array, size_t menor, size_t mayor, size_t size);
void cambiar(int *array, size_t lef, size_t ri);
/**
 * quick_sort - Sorts an array using the quick sort algorithm
 * @array: The array to sort.
 * @size: size of the array.
 */
void quick_sort(int *array, size_t size)
{
	if (array != NULL)
	{
		esquema_lomuto(array, 0, size - 1, size);
	}
}
/**
 * esquema_lomuto - sorts an array using Lomuto partitioning scheme.
 * @array: The array to sort..
 * @menor: The position of the array.
 * @mayor: The ending position of the array.
 * @size: size of the array.
 */
void esquema_lomuto(int *array, size_t menor, size_t mayor, size_t size)
{
	size_t j, i;
	int pivot;

	if ((menor >= mayor) || (array == NULL))
		return;
	pivot = array[mayor];
	j = menor;
	for (i = menor; i < mayor; i++)
	{
		if (array[i] <= pivot)
		{
			if (j != i)
			{
				cambiar(array, j, i);
				print_array(array, size);
			}
			j++;
		}
	}
	if (j != mayor)
	{
		cambiar(array, j, mayor);
		print_array(array, size);
	}
	if (j - menor > 1)
		esquema_lomuto(array, menor, j - 1, size);
	if (mayor - j > 1)
		esquema_lomuto(array, j + 1, mayor, size);
}

/**
 * cambiar - changechange two items in an array.
 * @array: The array to modify.
 * @lef: The index of the left item.
 * @ri: The index of the right item.
 */
void cambiar(int *array, size_t lef, size_t ri)
{
	int tmp;

	if (array != NULL)
	{
		tmp = array[lef];
		array[lef] = array[ri];
		array[ri] = tmp;
	}
}

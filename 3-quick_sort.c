#include "sort.h"
void quick(int *array, int lef, int ri, size_t size);
/**
  * quick_sort - function in charge of calling the quick function
  * @array: An array of integers to sort
  * @size: The size of the array
  * Return: sorted array.
  */
void quick_sort(int *array, size_t size)
{
	quick(array, 0, size - 1, size);
}
/**
  * quick - function that sorts an array of integers in ascending
  * @array: An array of integers to sort.
  * @lef: left position
  * @ri: right position
  * @size: The size of the array
  * Return: sorted array.
  */
void quick(int *array, int lef, int ri, size_t size)
{
	int iz = lef, de = ri, tmp, pivote = array[lef];

	do {
		while (array[iz] < pivote && iz < ri)
			iz++;
		while (array[de] > pivote && de > lef)
			de--;
		if (iz <= de)
		{
			tmp = array[iz];
			array[iz] = array[de];
			array[de] = tmp;
			print_array(array, size);
			iz++;
			de--;
		}
	} while (iz <= de);
	if (lef < de)
		quick(array, lef, de, size);
	if (ri > iz)
		quick(array, iz, ri, size);
}

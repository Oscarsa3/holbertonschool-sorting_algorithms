#include "sort.h"
/**
  * selection_sort - sorts array using the selection sort algorithm
  * @array: pointer to array
  * @size: size to array
  * Return: nothing
  */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, x, y, tmp;
	int min;

	if (size == 0 || size == 1)
		return;
	while (i < size)
	{
		min = array[i];
		x = i;
		y = 0;
		while (x < size)
		{
			if (min > array[x])
			{
				min = array[x];
				y = x;
			}
			x++;
		}
		if (y)
		{
			tmp = array[y];
			array[y] = array[i];
			array[i] = tmp;
			print_array(array, size);
		}
		i++;
	}

}

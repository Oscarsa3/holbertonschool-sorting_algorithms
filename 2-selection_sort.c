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
		x = i;
		min = array[i];
		while (x < size - 1)
		{
			if (min > array[x + 1])
			{
				min = array[x + 1];
				y = x + 1;
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
		y = 0;
		i++;
	}

}

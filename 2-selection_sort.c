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
		y = i;
		min = array[i];
		while (x < size - 1)
		{
			if (min > array[x + 1])
				min = array[x + 1];
			if (x + 2 == size)
			{
				while (y < size)
				{
					if (array[y] == min)
						break;
					y++;
				}
				tmp = array[y];
				array[y] = array[i];
				array[i] = tmp;
				print_array(array, size);
			}
			x++;
		}
		i++;
	}

}

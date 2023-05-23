#include "sort.h"
/**
  * bubble_sort - ascending order using the Bubble sort algorithm
  * @array: number's list
  * @size: size of array
  * Return: nothing
  */
void bubble_sort(int *array, size_t size)
{
	int a;
	size_t i = 0, x, y;

	if (size == 0 || size == 1)
		return;
	while (i < size)
	{
		x = 0;
		y = 1;
		while (x < size)
		{
			if (x == size - 1)
				break;
			if (array[x] > array[y])
			{
				a = array[y];
				array[y] = array[x];
				array[x] = a;
				print_array(array, size);
			}
			y++;
			x++;
		}
		i++;
	}
}

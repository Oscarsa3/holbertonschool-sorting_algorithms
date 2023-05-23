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
	size_t i = 0, x = 0;

	if (size == 0 || !array[1])
		return;
	while (array[i])
	{
		if (array[i] > array[i + 1])
		{
			a = array[i];
			array[i] = array[i + 1];
			array[i + 1] = a;
			print_array(array, size);
		}
		x++;
		if (x == (size * (size * 2)))
			break;
		if (i == size - 1)
			i = 0;
		else
			i++;
	}
}

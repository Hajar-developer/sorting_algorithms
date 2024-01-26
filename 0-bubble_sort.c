#include "sort.h"
/**
 * bubble_sort - Sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: The array to be printed
 * @size: Number of elements in @array
*/
void bubble_sort(int *array, size_t size); 
{
	size_t i = 0, j = 1;
	int tmp = 1;

	if (!array  || size < 2)
		return;
	for (; i < size - 1; i++)
	{
		for (i = 0; i < size - i - 1; j++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i + 1];
				array[i + 1] = array[j];
				array[i] = tmp;
				print_array(array, size);
			}
		}
	}
}

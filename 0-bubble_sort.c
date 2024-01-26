#include "sort.h"
/**
 * bubble_sort - Sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: The array to be printed
 * @size: Number of elements in @array
*/
void bubble_sort(int *array, size_t size); 
{
	size_t i = 0, j = 0;
	int aux = 0;

	if (array == NULL || size == 0)
		return;
	for (; i < size - 1; j++)
	{
		for (i = 0; i < size - j - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				aux = array[i + 1];
				array[i + 1] = array[i];
				array[i] = aux;
				print_array(array, size);
			}
		}
	}
}

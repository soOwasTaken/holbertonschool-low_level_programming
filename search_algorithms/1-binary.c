#include "search_algos.h"
/**
 * binary_search - linear search of a interger
 * @array: The array to search into
 * @size: Number of elements in @array
 * @value: index value to look up for
 * Return: index or error
 **/

int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int mid;
	int high = size - 1;
	int i;

	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
			{
			if (i < high)
				printf("%d, ", array[i]);
			else
				printf("%d", array[i]);
			}
printf("\n");
	mid = (low + high) / 2;
	if (array[mid] == value)
		return (mid);
	else if (array[mid] < value)
	{
		low = mid + 1;
	} else
	{
		high = mid - 1;
		}
	}
	return (-1);
}

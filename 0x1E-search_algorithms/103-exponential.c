#include <stdio.h>
#include "search_algos.h"

/**
* exponential_search - Searches for a value in a sorted array of integers
*                       using the Exponential search algorithm.
*
* @array: A pointer to the first element of the array to search in.
* @size: The number of elements in the array.
* @value: The value to search for.
* Return: The index where value is located, or -1
* if not found or array is NULL.
*/
int exponential_search(int *array, size_t size, int value)
{
size_t bound = 1, low, high;

if (array == NULL)
return (-1);

while (bound < size && array[bound] < value)
{
printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
bound *= 2;
}

low = bound / 2;
high = (bound < size - 1) ? bound : size - 1;

printf("Value found between indexes [%lu] and [%lu]\n", low, high);

return (binary_search(array, size, value, low, high));
}

/**
* binary_search - Searches for a value in a sorted array of integers
*                 using the Binary search algorithm.
*
* @array: A pointer to the first element of the array to search in.
* @size: The number of elements in the array.
* @value: The value to search for.
* @low: The lower bound of the array to search.
* @high: The upper bound of the array to search.
*
* Return: The index where value is located, or -1 if not found.
*/
int binary_search(int *array, size_t size, int value, size_t low, size_t high)
{

size_t mid;
size_t i;

while (low <= high)
{
printf("Searching in array: ");
for (i = low; i < high; i++)
printf("%d, ", array[i]);
printf("%d\n", array[i]);

mid = (low + high) / 2;

if (array[mid] == value)
return (mid);

if (array[mid] < value)
low = mid + 1;
else
high = mid - 1;
}

return (-1);
}

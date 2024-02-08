#include <stdio.h>
#include "search_algos.h"

/**
* advanced_binary - Searches for a value in a sorted array of integers.
*
* @array: A pointer to the first element of the array to search in.
* @size: The number of elements in the array.
* @value: The value to search for.
* Return: The index where value is located,
* or -1 if not found or array is NULL.
*/
int advanced_binary(int *array, size_t size, int value)
{
size_t left = 0, right = size - 1, mid;

if (array == NULL)
return (-1);

while (left <= right)
{
printf("Searching in array: ");
for (size_t i = left; i <= right; i++)
{
printf("%d", array[i]);
if (i < right)
printf(", ");
else
printf("\n");
}

mid = (left + right) / 2;

if (array[mid] == value)
{
if (mid == 0 || array[mid - 1] != value)
return (mid);
else
right = mid;
}
else if (array[mid] < value)
{
left = mid + 1;
}
else
{
right = mid - 1;
}
}

return (-1);
}

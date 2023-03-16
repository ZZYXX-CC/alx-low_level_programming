#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers containing values from min to max.
 *
 * @min: The minimum value.
 * @max: The maximum value.
 *
 * Return: A pointer to the newly created array, or NULL on failure.
 */
int *array_range(int min, int max)
{
    int i, size;
    int *arr;

    if (min > max)
        return (NULL);

    size = max - min + 1;

    /* Check for potential integer overflow when allocating memory */
    if (size / sizeof(int) != (unsigned)size)
        return (NULL);

    /* Allocate memory */
    arr = malloc(size * sizeof(int));

    if (!arr)
        return (NULL);

    /* Fill the array */
    for (i = min; i <= max; i++)
        arr[i - min] = i;

    return (arr);
}


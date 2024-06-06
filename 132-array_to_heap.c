#include "binary_trees.h"

/**
 * array_to_heap - establishes a Max Binary Heap tree from an array
 * @array: points to the first element of the array to be converted
 * @size: amount of element in the array
 *
 * Return: points to the root node of the new Binary Heap
 *         NULL iffailure
 */
heap_t *array_to_heap(int *array, size_t size)
{
	unsigned int i;
	heap_t *root = NULL;

	for (i = 0; i < size; i++)
		heap_insert(&root, array[i]);

	return (root);
}

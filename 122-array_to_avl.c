#include "binary_trees.h"

/**
 * array_to_avl - establishes an AVL tree from an array
 * @array: a node is created from this array
 * @size: size of array
 *
 * Return: points the root node of the new AVL tree
 *         NULL if failure
 */
avl_t *array_to_avl(int *array, size_t size)
{
	unsigned int i;
	avl_t *root = NULL;

	for (i = 0; i < size; i++)
		avl_insert(&root, array[i]);

	return (root);
}

#include "binary_trees.h"

/**
 * array_to_bst - establishes a Binary Search Tree from an array
 * @array: takes notefirst element of the array to be converted
 * @size: list  of elements in the array
 * Return: points to the root node of the new BST
 *         NULL if failure
 */
bst_t *array_to_bst(int *array, size_t size)
{
	unsigned int i;
	bst_t *root = NULL;

	for (i = 0; i < size; i++)
		bst_insert(&root, array[i]);

	return (root);
}

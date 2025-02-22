#include "binary_trees.h"

/**
 * bst_search - looks for a value in a Binary Search Tree
 * @tree: points the root node of the BST to search
 * @value: value inserted to check the tree
 * Return: Points a node containing an int similar to `value`
 *         NULL if tree is NULL
 *         NULL if no match is found
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *node = (bst_t *)tree;

	if (!tree)
		return (NULL);

	while (node)
	{
		if (value == node->n)
			return (node);
		if (value < node->n)
			node = node->left;
		else if (value > node->n)
			node = node->right;
	}

	return (NULL);
}

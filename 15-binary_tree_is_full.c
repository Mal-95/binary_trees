#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if the binary tree has been filled
 * @tree: points the root note to check the fullness
 *
 * Return: 1 if tree is full
 *         0 if not full
 *         0 if NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	if (tree->right && tree->left)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	return (0);
}

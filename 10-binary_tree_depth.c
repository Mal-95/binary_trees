#include "binary_trees.h"

/**
 * binary_tree_depth - able to figure the depth of binary tree
 * @tree: tree at which the depth will be calculated
 *
 * Return: depth of node
 *         0 if NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}

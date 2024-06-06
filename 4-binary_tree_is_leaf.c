#include "binary_trees.h"

/**
 * binary_tree_is_leaf - looks for a leaf in a binary tree
 * @node: node to be assessed
 *
 * Return: 1 if a leaf
 *         0 if not
 *         0 if NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return ((!node || node->left || node->right) ? 0 : 1);
}

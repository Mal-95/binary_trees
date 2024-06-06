#include "binary_trees.h"

/**
 * binary_tree_sibling - looks for siblings in a binary tree
 * @node: points to the node that will be assessed for siblings
 * Return: point the sibling node
 *         NULL if node is NULL
 *         NULL if the parent is NULL
 *         NULL if the node has no siblings
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}

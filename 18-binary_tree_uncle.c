#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle in a binary tree
 * @node: pointer to find the uncle on a node
 *
 * Return: points the uncle on the node
 *         NULL if node is NULL
 *         NULL if the parent is NULL
 *         NULL if the uncle is not on the node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}

/**
 * binary_tree_sibling - discovers sibling of a node
 * @node: node where the sibling is checked
 *
 * Return: points the node containing sibling
 *         NULL if node is NULL
 *         NULL if parent is NULL
 *         NULL if no siblings in the node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}

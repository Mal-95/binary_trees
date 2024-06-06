#include "binary_trees.h"

/**
 * binary_tree_is_root - checks for a root in a node
 * @node: node to be assessed
 *
 * Return: 1 if a root
 *         0 if not or NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return ((!node || node->parent) ? 0 : 1);
}

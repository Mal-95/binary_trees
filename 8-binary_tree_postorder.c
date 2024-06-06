#include "binary_trees.h"

/**
 * binary_tree_postorder - assesses a binary tree via post-order traverse
 * @tree: tree to be transversed
 * @func: function that calls a node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}

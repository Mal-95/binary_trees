#include "binary_trees.h"

/**
 * binary_tree_preorder - assesses the binary tree through pre-order traversal
 * @tree: tree that performs the transverse
 * @func: a function that calls a node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}

#include "binary_trees.h"

/**
 * binary_tree_inorder - assesses a binary tree via inorder traversal
 * @tree: tree that is to be transversed
 * @func: a function that calls a node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}

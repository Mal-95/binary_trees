#include "binary_trees.h"

/**
 * binary_tree_is_bst - tests for a valid Binary Search Tree
 * @tree: points a root node to be checked
 *
 * Return: 1 if tree is a valid BST
 *         0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (btib_helper(tree, INT_MIN, INT_MAX));
}

/**
 * btib_helper - tests whether a binary tree is a valid Binary Search Tree
 * @tree: a tree to check the root node
 * @min: Lower bound of assesed nored
 * @max: Upper bound of assesed nodes
 *
 * Return: 1 if tree is a valid BST
 *         0 otherwise
 */
int btib_helper(const binary_tree_t *tree, int min, int max)
{
	if (!tree)
		return (1);

	if (tree->n < min || tree->n > max)
		return (0);

	return (btib_helper(tree->left, min, tree->n - 1) &&
		btib_helper(tree->right, tree->n + 1, max));
	/* -1 and +1 stem from "There must be no duplicate values" req */
}

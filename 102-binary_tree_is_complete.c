#include "binary_trees.h"

/**
 * binary_tree_is_complete - asseses if a binary tree is complete
 * @tree: where the root node is checked
 *
 * Return: 1 if the tree is complete
 *         0 if the tree is not complete
 *         0 if tree is NULL
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);
	size = binary_tree_size(tree);

	return (btic_helper(tree, 0, size));
}

/**
 * btic_helper - asseses if a binary tree is complete
 * @tree: a tree where the root node is assesed
 * @index: index to access the node
 * @size: amount of nodes in the tree
 *
 * Return: 1 if the tree is complete
 *         0 if not complete
 *         0 if NULL
 */
int btic_helper(const binary_tree_t *tree, size_t index, size_t size)
{
	if (!tree)
		return (1);

	if (index >= size)
		return (0);

	return (btic_helper(tree->left, 2 * index + 1, size) &&
		btic_helper(tree->right, 2 * index + 2, size));
}

/**
 * binary_tree_size - sizes of a binary tree
 * @tree: tree at which the size is measured
 *
 * Return: sizes of the tree
 *         0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) +
		binary_tree_size(tree->right) + 1);
}

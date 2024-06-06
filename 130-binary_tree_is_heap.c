#include "binary_trees.h"

/**
 * binary_tree_is_heap - determines whether a tree is a valid Max Binary Heap
 * @tree: pointsthe root node of the tree to check
 *
 * Return: 1 if tree is a valid Max Binary Heap
 *         0 if NULL
 *         0 otherwise
 */
int binary_tree_is_heap(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (btih_helper(tree));
}

/**
 * btih_helper - determines whether a binary tree is a valid Max Binary Heap
 * @tree: points the root node of the tree to check
 *
 * Return: 1 if tree is a valid Max Binary Heap
 *         1 if NULL
 *         0 otherwise
 */
int btih_helper(const binary_tree_t *tree)
{
	if (!tree)
		return (1);

	if (!binary_tree_is_complete(tree))
		return (0);

	if (tree->left)
		if (tree->left->n > tree->n)
			return (0);
	if (tree->right)
		if (tree->right->n > tree->n)
			return (0);

	return (btih_helper(tree->left) &&
		btih_helper(tree->right));
}

/**
 * binary_tree_is_complete - determines whether a binary tree is complete
 * @tree: pointsthe root node of the tree to check
 *
 * Return: 1 if the tree is complete
 *         0 if not complete
 *         0 if NULL
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
 * btic_helper - determines whether a binary tree is complete
 * @tree: points the root node of the tree to check
 * @index: index containing nodes
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
 * binary_tree_size - sizes the binary tree
 * @tree: measures the size of the tree
 *
 * Return: size of the tree
 *         0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) +
		binary_tree_size(tree->right) + 1);
}

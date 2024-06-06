#include "binary_trees.h"

/**
 * binary_tree_nodes - checks the amount of nodes with at least 1 offspring
 * @tree: tree where the counting will occur
 *
 * Return: amount of nodes assessed
 *         0 if  NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);

	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}

/**
 * binary_tree_size - sizes the size of a binary tree
 * @tree: tree to be sized
 *
 * Return: size the tree occupies
 *         0 if NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * binary_tree_leaves - counts the amount of leaves in a binary tree
 * @tree: tree where leaves are counted
 *
 * Return: amount of leaves
 *         0 if NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}

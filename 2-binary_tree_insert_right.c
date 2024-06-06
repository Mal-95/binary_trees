#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a new node on the right-hand side
 * @parent: points the node to add a node on the right
 * @value: stored in the new node
 * Return: Pointer to new node
 *         NULL on failure
 *         NULL if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = parent->right;
	parent->right = new;
	if (new->right)
		new->right->parent = new;
	return (new);
}

#include "binary_trees.h"
/*
 * binary_tree_insert_left - Inserts a new node only on the left
 * @parent: pointer to node that insert a new node on the left
 * @value: value to place in the new node
 * Return: Pointer to recently created node
 *         NULL on failure
 *         NULL if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->right = NULL;
	new->left = parent->left;
	parent->left = new;
	if (new->left)
		new->left->parent = new;
	return (new);
}
